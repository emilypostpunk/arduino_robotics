
#include <AFMotor.h> //import Motor.h Library

AF_DCMotor motor1 (1);
AF_DCMotor motor2 (4);

void setup ()  {

  motor1.setSpeed (175); // set the motor speed(s) at 200 to 255 PWM
  motor2.setSpeed (175);
  
}

void loop ()  {

  motor1.run (FORWARD);      // motor(s) run for x second(s)
  motor2.run (FORWARD);
  delay (10000);

  motor1.run (RELEASE);      // motor(s) stop for x second(s)
  motor2.run (RELEASE);
  delay (5000);
  
}
