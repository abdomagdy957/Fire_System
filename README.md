# Fire_System
This fire alarm system is designed to detect, indicate and extinguish fire by using necessary precautions. The system consists of three main stages:

1-fine state
2-heat state 
3-fire state

Components:
1- Micro-controller "Atmega32"
2- lcd 4-bit mode
3- keypad 4*4
4- motor
5- temperature sensor
6- pressure sensor act like smoke sensor.
7-Yellow and Red leds.

Explanation:
-if temp sensor read by adc a temperature less than 50 celsius so it is in the fine state mode which all leds is off and motor and only displays on lcd the state and temperature reading.
-if temp sensor equal 50 celsius or more will move to one of two states heat state or fire state according to smoke sensor.
-if smoke sensor read less than (575 reading) 50% so it will move to heat state which yellow led is on and displays on lcd the temperature and smoke value.
-if smoke sensor read more than 50% it will move to the fire state which red led is on and motor will rotate and wont back to another state if we changed the temperature.
-it wont back to anystate whether password is matched.
-if password is entered correctly it will permit to system to move to any state.

-- how to use this project -- 
i recommend dont use any file from there except CFG folder to change the pins which you will put on microcontroller.
1-dio.cfg >> u will make the 2 pins will connect to 2 sensors are INFREE and the other are output.
2-keypad.cfg >> u will change the first pin in row and first pin in col if you need in this file.
3-lcd.cfg >> u will choose which mode will be on 4-bit or 8-bit.
4-sensor_cfg.h >> u will choose which channels will sensors will be connect.
5-motor_Cfg.h >> u will choose which 2 pins will connect to h-bridge.
6-Fire-System_Cfg.h >> u can change from it the password only. default = "1234"
