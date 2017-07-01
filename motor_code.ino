// Use this code to test your motor with the Arduino board:

// if you need PWM, just use the PWM outputs on the Arduino
// and instead of digitalWrite, you should use the analogWrite command

#include <AFMotor.h>

// --------------------------------------------------------------------------- Motors
AF_DCMotor motor_1 (1);
AF_DCMotor motor_4 (4);


// --------------------------------------------------------------------------- Setup
void setup ()  {
Serial.begin (9600);

// Setup motors
int i;
for (i = 0; i < 2; i++)  {
pinMode (motor_1 [i], 1);
pinMode (motor_4 [i], 4);
}

}

// --------------------------------------------------------------------------- Loop
void loop () { 

drive_forward ();
delay (1000);
motor_stop ();
Serial.println ("1");

drive_backward ();
delay (1000);
motor_stop ();
Serial.println ("2");

turn_left ();
delay (1000);
motor_stop ();
Serial.println ("3");

turn_right ();
delay (1000);
motor_stop ();
Serial.println ("4"); 

motor_stop ();
delay (1000);
motor_stop ();
Serial.println ("5");
}

// --------------------------------------------------------------------------- Drive

void motor_stop ()  {
digitalWrite (motor_1 [0], LOW); 
digitalWrite (motor_1 [1], LOW); 

digitalWrite (motor_4 [0], LOW); 
digitalWrite (motor_4 [1], LOW);
delay (25);
}

void drive_forward ()  {
digitalWrite (motor_1 [0], HIGH); 
digitalWrite (motor_1 [1], LOW); 

digitalWrite (motor_4 [0], HIGH); 
digitalWrite (motor_4 [1], LOW); 
}

void drive_backward ()  {
digitalWrite (motor_1 [0], LOW); 
digitalWrite (motor_1 [1], HIGH); 

digitalWrite (motor_4 [0], LOW); 
digitalWrite (motor_4 [1], HIGH); 
}

void turn_left ()  {
digitalWrite (motor_1 [0], LOW); 
digitalWrite (motor_1 [1], HIGH); 

digitalWrite (motor_4 [0], HIGH); 
digitalWrite (motor_4 [1], LOW);
}

void turn_right ()  {
digitalWrite (motor_1 [0], HIGH); 
digitalWrite (motor_1 [1], LOW); 

digitalWrite(motor_4 [0], LOW); 
digitalWrite(motor_4 [1], HIGH); 
}
