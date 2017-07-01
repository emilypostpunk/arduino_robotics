//L293D
//Motor A
const int motorPin1  = 1;  // Pin 1 of L293

//Motor B
const int motorPin4  = 4;  // Pin  4 of L293

//This will run only one time.
void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, 1);
//    pinMode(motorPin2, OUTPUT);
//    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, 4);
    
    //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4

    //This code  will turn Motor A clockwise for 2 sec.
    digitalWrite(motorPin1, HIGH);
//    digitalWrite(motorPin2, LOW);
//    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(2000); 
    //This code will turn Motor A counter-clockwise for 2 sec.
    digitalWrite(motorPin1, LOW);
//    digitalWrite(motorPin2, HIGH);
//    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(2000);
    
    //This code will turn Motor B clockwise for 2 sec.
    digitalWrite(motorPin1, LOW);
//    digitalWrite(motorPin2, LOW);
//    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(2000); 
    //This code will turn Motor B counter-clockwise for 2 sec.
    digitalWrite(motorPin1, LOW);
//    digitalWrite(motorPin2, LOW);
//    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(2000);    
    
    //And this code will stop motors
    digitalWrite(motorPin1, LOW);
//    digitalWrite(motorPin2, LOW);
//    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  
}


void loop(){
  

}

