
#include <AFMotor.h> //Import Motor.h Library

AF_DCMotor motor1 (1);
AF_DCMotor motor2 (4);

void setup ()  {
  
//  Serial.begin (9600); // Open Serial communication at baud rate 9600 bps
//  Serial.println ("Testing the Motor");

  motor1.setSpeed (200); // set the motor speed(s) at 200 to 255 PWM
  motor2.setSpeed (200);
  
}

void loop ()  {
  
//  Serial.print ("....TURNING.... ");

  motor1.run (FORWARD);      // turn it on going forward
  delay (2000); // delay at x second(s)
  motor2.run (FORWARD);
  delay (2000);

//  Serial.print("Turning Backward");
//  motor.run(BACKWARD);     // the other way
//  delay(1000); // delay at x second(s)
//
//  Serial.print ("Release or Stop");

  motor1.run (RELEASE);      // Motor will stop
  delay (1000); // delay at x second(s)
  motor2.run (RELEASE);
  delay (1000);
  
}
