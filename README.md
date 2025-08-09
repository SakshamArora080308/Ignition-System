# Brief Description
An ignition system that works by heating steel wool red hot which further causes a match to burn. The system incorporates a safety mechanism by activating a buzzer if an object/person is too close. This project can be used in multiple aerospace areas such as model rocketry. Ignition systems have applications in aerospace fields such as in rocket propulsion and gas turbine engines 

## Introduction
My main motivation to start this project was to build a rocket and use the ignition system to safely launch the rocket. However, after researching, I found that building and launching model rockets is not allowed in the country. So, I just built an ignition system as a passion project instead. Furthermore, watching the steel wool get red hot was mesmerising. 
The materials used in the project are as follows: 
1) Arduino Uno
2) Red, yellow, green LEDs and an active buzzer
3) A 2x 14500 battery pack (7.4V)
4) Ultrasonic Sensor
5) Breadboard and jumper wires
6) 5V relay module
7) Steel wool
## Learnings 
* Incorporating a relay module in a circuit: This was my first project using a relay. I learnt that a relay is an electrically controlled mechanical switch that lets you control high-voltage devices. I learnt how to wire a relay and how the "normally open" and "normally closed" switches work.
* Material selection: I intentionally used steel wool since I researched and learnt that steel wool has a higher resistance than copper therefore it gets hotter faster, as more electrical energy is converted to heat energy. 
* Incorporating a safety logic:  I learnt the importance of using safety logic in systems that need to be in controlled environments such as in this system. These safety mechanisms are important to prevent injuries or any unexpected events.

## Safety Features 
* Ultrasonic sensor which activates a buzzer for 3 seconds if it detects any object/person within a threshold in the beginning.
* The relay module turns off automatically after 5 seconds to prevent the steel wool being red hot for an extended period of time
   
## Future Improvements 
I want to make a better stand for the match and the steel wool to keep them vertical. Furthermore, there is a fault in the ultrasonic sensor logic system which I recognise but cannot fix due to not having enough expertise with C++. The ignition system should reset whenever the distance goes below the threshold, however, that does not happen once the ignition system starts. I have identified the mistake successfully, which is the excessive usage of the ```delay``` function and I also know that this can be fixed by the ```millis``` function, however I do not know how to implement that in the code 
