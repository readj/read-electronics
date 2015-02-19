//Read_Servo_Exercise
//Jacob Read

//Using Servo Library

#include <Servo.h>

//Calling Both Servos

Servo Servo_A;
Servo Servo_B;

//Setup
void setup(){
  //Attaching Servos to Pins
  Servo_A.attach(9);
  Servo_B.attach(10);
  
  //Sequence of Commands
  Servo_B.write(90);
  Servo_A.write(0);
  delay(2000);
  Servo_A.write(90);
  Servo_B.write(0);
  delay(2000);
  Servo_A.write(180);
  Servo_B.write(180);
  delay(4000);
  Servo_A.write(0);
  Servo_B.write(0);
  delay(3000);
  Servo_A.write(90);
  Servo_B.write(180);
  delay(1000);
  Servo_B.write(90);
  Servo_A.write(180);
  delay(1000);
  Servo_A.write(90);
}

//Loop
void loop(){
  //Turn with High Light Readings
  if(analogRead(0)>550){
    Servo_A.write(180);
    Servo_B.write(0);
  }
  //No Rotation with Low Light Readings
  if(analogRead(0)<550){
    Servo_A.write(90);
    Servo_B.write(90);
  }
}
