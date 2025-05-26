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
10. Attach sensors to the Arduino and test to make sure it works (visuals are in the section below)
## Hardware/Wires (WORK IN PROGRESS)
1. Connect the sensors to the Arduino (you will need a breadboard)
![Sensors' connection](https://github.com/user-attachments/assets/ed1a2002-4c31-45a0-b06c-11bdd0c70b41)
![Sensors' connection (pt  2)](https://github.com/user-attachments/assets/ab3a1144-876d-4214-b54b-9be3f3cab52e)
![Arduino Board closeup](https://github.com/user-attachments/assets/80d16b49-a13d-4681-8c27-c4cf55805481)
![Breadboard closeup](https://github.com/user-attachments/assets/323dfb34-1ec0-415a-a330-f9752a92becc)
![Breadboard from the side](https://github.com/user-attachments/assets/1187e2b9-f201-42fa-a2ba-17457b6e1d45)

## Important Notes
1. **Make sure the sensor is in the soil**, otherwise the system will not be able to moisturize the plant.
2. You will also need to place the water pump inside a big gallon or jug of **clean, accessible** water.
## Credits/Incentives
I decided to assemble this system in order to help my mother's plants stay moisturized while my family is out of town and unable to water them. I believe this project will help us worry less about the plants dying or becoming dry, and we will not have to rely on others to water the plants for us.

Thanks to [Smart Things DIY](https://www.youtube.com/@smartthingsdiy) for all the help. You can see their original video [here](https://www.youtube.com/watch?v=b5GgpAN53r4).

Please leave a comment with any questions/issues/concerns, and I will be glad to help!
