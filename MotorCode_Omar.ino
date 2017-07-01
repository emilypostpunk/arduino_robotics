


// declare variable pushButton and give it a value of "10" (for pin number 10)

//int pushButton = 10;

#include <AFMotor.h>    // import Motor.h Library

AF_DCMotor motor1 (1);
AF_DCMotor motor2 (4);

// constants won't change. used here to set a pin number:

const int motorPin =  (1, 4);   // the numbers of the motor pins

// variables will change:

int motorState = LOW;   // motorState used to set the motor

//const int trigPin = 11;   //attaches distance sensor
//const int echoPin = 12;


void setup ()  {
  // the setup function runs once to set everything up for the loop:

  // provides power to DC motors
  
//  analogWrite (1, 255);   // provides power to motor 1
//  analogWrite (4, 255);   // provides power to motor 2
//  Serial.begin (9600);
  
//  pinMode (pushButton, INPUT);    // assign the pushbutton pin as an input
  
//  pinMode(trigPin, OUTPUT);   // provides power to distance sensor
//  pinMode(echoPin, INPUT);

 // turn on motor
  motor1.setSpeed(200);
 
  motor1.run(RELEASE);

}

void loop () {
  // the loop function runs over and over again forever

  motor1.run (FORWARD);      // motor(s) will run
  delay (2000); // delay at x second(s)
  motor2.run (FORWARD);
  delay (2000);

  motor1.run (RELEASE);      // motor(s) will stop
  delay (1000); // delay at x second(s)
  motor2.run (RELEASE);
  delay (1000);
  }



