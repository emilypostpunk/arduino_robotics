/*
* This program is the control for a two-servo drawing
* machine. This machine uses two pots (or other resistive sensors)
* to control two servos. The two servos make the arms of the
* drawing machine move, and thus make drawings. *
* You could make this machine reactive to the environment by
* replacing the pots with other environmental resistive sensors
* such as light sensors, heat sensors, etc. This assumes that you
* install the resistive sensors in a voltage divider arrangement
* with the center tap of the voltage divider feeding the analog inputs.
* You might also want to calibrate your sensors and adjust the
* range using "map" and "constrain" to get full range of motion
* of the servos given the range of environmental data you'll be * seeing.
*/

#include <Servo.h>      // include the Servo library
Servo servo1, servo2;   // create objects for both servos
int servo1Pin = 10;     // define where the servos are connected 
int servo2Pin = 9;      // choose any digital pins you like


int pot1Pin = A0;       // analog pin for first pot/sensor
int pot2Pin = A1;       // analog pin for second pot/sensor
int pot1Val, pot2Val;   // variables for pot values

void setup() {
servo1.attach(servo1Pin); // attach the servo objects to digital pins 
servo2.attach(servo2Pin);
}

void loop() {
  pot1Val = analogRead(pot1Pin); // read pot1 value
  pot2Val = analogRead(pot2Pin); // read pot2 value

        // map the values received on the analog inputs from the pots
        // to the servo's range of motion. If you're using different
        // analog sensors, here's where you adjust the map function. You 
        // might also want to add a constrain function to make sure you're 
        // keeping the values you're writing to the servos in the
        // range of 0-179, or in a narrow range to keep the movement slow.
        
  pot1Val = map(pot1Val, 0, 1023, 0, 179);
  pot2Val = map(pot2Val, 0, 1023, 0, 179);

        // send the data to the servos 
  
  servo1.write(pot1Val); 
  servo2.write(pot2Val);
  
  delay(30);    // give the servos time to react... }
}

