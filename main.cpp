/**
  This is an extremely popular DIY project that allows you to automatically water your plants according to the level of moisture in the soil
  @author MecaHumArduino
  @version 3.0
  **THIS IS STILL A WORK IN PROGRESS. AS OF NOW, THIS ONLY WORKS FOR ONE SENSOR/PLANT. I WILL MAKE SURE TO UPDATE IT AND KEEP EVERYONE POSTED**
*/

#include <Arduino.h>
#include <ArduinoJson.h> // https://github.com/bblanchon/ArduinoJson (use v6.xx)
#include <SoftwareSerial.h>

#define DEBUG true

// ESP TX => Uno Pin 2
// ESP RX => Uno Pin 3
SoftwareSerial wifi(2, 3);

// **************
String sendDataToWiFiBoard(String command, const int timeout, boolean debug);
String prepareDataForWiFi(float sensor1Value);  // FIXED: Added missing semicolon here
void setup();
void loop();
// **************

int IN1 = 2;

int Pin1 = A0;

float sensor1Value = 0;

/**
 * Build and return a JSON document from the sensor data
 * @param sensor1Value
 * @return
 */
String prepareDataForWiFi(float sensor1Value)
{
  StaticJsonDocument<200> doc;

  doc["sensor1Value"] = String(sensor1Value);

  char jsonBuffer[512];
  serializeJson(doc, jsonBuffer);

  return jsonBuffer;
}

/**
 * Send data through Serial to ESP8266 module
 * @param command
 * @param timeout
 * @param debug
 * @return
 */
String sendDataToWiFiBoard(String command, const int timeout, boolean debug)
{
  String response = "";

  wifi.print(command); // send the read character to the esp8266

  long int time = millis();

  while((time+(unsigned long)timeout) > millis()) {  // FIXED: Cast timeout to unsigned long
    while(wifi.available()) {
      // The esp has data so display its output to the serial window
      char c = wifi.read(); // read the next character.
      response+=c;
    }
  }

  if (debug) {
    Serial.print(response);
  }

  return response;
}

void setup() {
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);

  pinMode(Pin1, INPUT);

  digitalWrite(IN1, HIGH);

  delay(500);
}

void loop() {

  if (DEBUG == true) {
    Serial.print("buffer: ");
    if (wifi.available()) {
      String espBuf;
      long int time = millis();

      while((time+(unsigned long)1000) > millis()) {  // FIXED: Cast 1000 to unsigned long
        while (wifi.available()) {
          // The esp has data so display its output to the serial window
          char c = wifi.read(); // read the next character.
          espBuf += c;
        }
      }
      Serial.print(espBuf);
    }
    Serial.println(" endbuffer");
  }

  Serial.print("Plant 1 - Moisture Level:");
  sensor1Value = analogRead(Pin1);
  Serial.println(sensor1Value);

  if (sensor1Value > 500) {
    digitalWrite(IN1, LOW);
  } else {
    digitalWrite(IN1, HIGH);
  }

  String preparedData = prepareDataForWiFi(sensor1Value);
  if (DEBUG == true) {
    Serial.println(preparedData);
  }
  sendDataToWiFiBoard(preparedData, 1000, DEBUG);

  delay(2000); // 2 seconds
}
