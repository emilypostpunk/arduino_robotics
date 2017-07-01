/* Adapted from Blink without Delay

 Turns on and off a light emitting diode (LED) connected to a digital
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.

 The circuit:
 * Use the onboard LED.
 * Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products

 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 modified 11 Nov 2013
 by Scott Fitzgerald
 modified 9 Jan 2017
 by Arturo Guadalupi


 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

#include <AFMotor.h> //Import Motor.h Library

AF_DCMotor motor1 (1);
AF_DCMotor motor2 (4);


// constants won't change. Used here to set a pin number :

const int motorPin =  (1, 4); // the numbers of the motor pins

// Variables will change :

int motorState = LOW;             // motorState used to set the motor

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store

unsigned long previousMillis = 0;        // will store last time motor was updated

// constants won't change :

const long interval = 1000;           // interval at which to run (milliseconds)

void setup() {
  
  // set the digital pin as output:
  
  pinMode (motorPin, OUTPUT);

  motor1.setSpeed (100); // Set the motor speeds at 200 to 255 PWM
  motor2.setSpeed (100);
  
}

void loop ()  {
  
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to run the motor; that is, if the
  // difference between the current time and last time you ran
  // the motor is bigger than the interval at which you want to
  // run the motor.

  motor1.run (FORWARD);      // turn it on going forward
//  delay (2000); // delay at x second(s)
  motor2.run (FORWARD);
//  delay (2000);

//  motor1.run (RELEASE);      // Motor will stop
//  delay (1000); // delay at x second(s)
//  motor2.run (RELEASE);
//  delay (1000);
  
  unsigned long currentMillis = millis ();

  if (currentMillis - previousMillis >= interval)  {
    // save the last time you ran the motor
    previousMillis = currentMillis;

    // if the motor is off turn it on and vice-versa:
    
    if (motorState == LOW)  {
      motorState = HIGH;
    } else {
      motorState = LOW;
    }

    // set the motor with the motorState of the variable:
    
    digitalWrite (motorPin, motorState);
  }
}

