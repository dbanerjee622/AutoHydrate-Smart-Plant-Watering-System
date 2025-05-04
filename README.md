# AutoHydrate-Smart-Plant-Watering-System
## Overview
This popular DIY project enables automatic plant watering based on soil moisture levels. Utilizing an Arduino, it detects the moisture content of the soil, and when the soil is dry, it activates a water dispensing mechanism to rehydrate the plant.

This system is helpful to water 4-5 indoor (or even outdoor) plants/vases during prolonged abscences or when the soil is dry.
## Materials Needed
[ELEGOO 4 Channel DC 5V Relay Module with Optocoupler](https://www.amazon.com/dp/B09ZQS2JRD?ref_=pe_125775000_1044873430_t_fed_asin_title)

[3pcs Mini Water Pump](https://www.amazon.com/dp/B07TMW5CDM?ref_=pe_125775000_1044873430_t_fed_asin_title)

[3Pcs 2 AA Battery Holder with Switch](https://www.amazon.com/dp/B076CB5B2R?ref_=pe_125775000_1044873430_t_fed_asin_title) (Requires AA batteries)

[IZOKEE 240pcs Solderless Breadboard Jumper Wires](https://www.amazon.com/dp/B08151TQHG?ref_=pe_125775000_1044873430_t_fed_asin_title)

[ELEGOO UNO R3 Board ATmega328P with USB Cable](https://www.amazon.com/dp/B01EWOE0UU?ref_=pe_125775000_1044873430_t_fed_asin_title)

[ELEGOO 3pcs Breadboard 830 Point Solderless Prototype PCB Board Kit](https://www.amazon.com/dp/B01EV6LJ7G?ref_=pe_125775000_1044873430_t_fed_asin_title)

[Capacitive Soil Moisture Sensor Module Corrosion Resistant](https://www.amazon.com/dp/B07SYBSHGX?ref_=pe_125775000_1044873430_t_fed_asin_title)
## Programming Steps
1. Download Visual Studio Code (on Mac or Windows)
2. Install the PlatformIO IDE extension
3. Go to the PlatformIO tab in the left corner and go to Quick Access > PIO Home > Open (this should take you to the home screen for PlatformIO)
4. Click "New Project"
5. Name it whatever you want but make sure "Arduino Uno" is selected next to "Board" (to do this just type in "Uno" and "Arduino Uno" should be the first option that comes up"
6. The option for "Framework" should be "Arduino"
7. **Choose a file location** (This is VERY IMPORTANT. Make sure you know where the file is and you have access to it at ALL TIMES. YOU WILL NEED IT)
8. Begin programming (all the code is listed in the files above)
9. Once programming is complete, connect the Arduino board to the computer for it to process the code (use the BLUE wire and connect one end to the Arduino inserter and one to the computer
## Hardware/Wires
1. Connect the sensor to the Arduino board
2. Connect the Arduino board to the compuer with the big, blue wire, in order for it to process the code
3. Test to make sure it works
   a. On the VSCode go to PlatformIo > Project Tasks > Upload and Monitor, and wait for it to approve. After this, it should start displaying the value (moisture level) of the sensor
   b. Dip the sensor in and out of the water. When the sensor is in the water, the value should be low, and when out of the water, it should be higher. Keep dipping and taking out the sensor until this is confirmed
4. Begin connecting parts of the Arduino board to the relay module (see my images in the other files for real visuals)
5. Then begin connecting parts of the relay module to the breadboard (you will need a mini screwdriver for parts of the relay module to be screwed in)
6. Put all the wires into the correct parts of the breadboard (once again, visuals are above)
7. Connect parts of the breadboard to the battery holder (make sure there are AA bateries facing the right way)
8. Connect parts of the breadboard to the water pump
9. Once done, insert the tube into the pump and the system should be assembled **for one sensor**
10. Turn the battery switch on, make sure the Arduino board is plugged in somewhere, and make sure the pump is in water
11. **Please make sure** the water that comes out of the tube goes in a secure place. Otherwise, the water will come out of the tube and spill/leak
12. When the sensor is dry, water should be coming from the pump through the tube
13. Your system should now be complete

**ALL VISIUALS/IMAGES ARE IN FILES ABOVE**

Now you will have to just connect four sensors to the Arduino board and the system will be set up

**THIS IS JUST TESTING AND MAKING THE SYSTEM**. When finished, put the sensors in the plants' soil, the water pump inside a big jug of **safe, clean water**, and put the tube back into the soil to water the plants

Congratulations! Your system is now complete.
## Important Notes
1. **Make sure the sensor is in the soil**, otherwise the system will not be able to moisturize the plant.
2. You will also need to place the water pump inside a big gallon or jug of **clean, accessible** water.
## Credits/Incentives
I decided to assemble this system in order to help my mother's plants stay moisturized while my family is out of town and unable to water them. I believe this project will help us worry less about the plants dying or becoming dry, and we will not have to rely on others to water the plants for us.

Thanks to [Smart Things DIY](https://www.youtube.com/@smartthingsdiy) for all the help. You can see their original video [here](https://www.youtube.com/watch?v=b5GgpAN53r4).

Please leave a comment with any questions/issues/concerns, and I will be glad to help!
