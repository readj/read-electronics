//Jacob Read & Marco Palmisano
//Period 4
//Electronics Term 2- Final Project

//Using Servo Library
#include <Servo.h>

//Calling The Servos
Servo FrontLeftWheel;
Servo FrontRightWheel;
Servo BackLeftWheel;
Servo BackRightWheel;

//Pre-Programmed Function
void startupMovement(){
  //LED Pin Mode Setup
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  //Attaching Servos to Pins
  FrontLeftWheel.attach(8);
  FrontRightWheel.attach(9);
  BackLeftWheel.attach(10);
  BackRightWheel.attach(11);
  
  //Sequence of Commands
  //Forward Movement
  FrontLeftWheel.write(180);
  FrontRightWheel.write(0);
  BackLeftWheel.write(180);
  BackRightWheel.write(0);
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(6, LOW);
  //Right Turn
  FrontLeftWheel.write(180);
  FrontRightWheel.write(180);
  BackLeftWheel.write(180);
  BackRightWheel.write(180);
  delay(1500);
  //Forward Movement Repeated
  FrontLeftWheel.write(180);
  FrontRightWheel.write(0);
  BackLeftWheel.write(180);
  BackRightWheel.write(0);
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
  //Left Turn
  FrontLeftWheel.write(0);
  FrontRightWheel.write(0);
  BackLeftWheel.write(0);
  BackRightWheel.write(0);
  delay(1500);
  //Forward Movement Repeated
  FrontLeftWheel.write(180);
  FrontRightWheel.write(0);
  BackLeftWheel.write(180);
  BackRightWheel.write(0);
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
  //Left Turn
  FrontLeftWheel.write(0);
  FrontRightWheel.write(0);
  BackLeftWheel.write(0);
  BackRightWheel.write(0);
  delay(1500);
  //Reverse Movement
  FrontLeftWheel.write(0);
  FrontRightWheel.write(180);
  BackLeftWheel.write(0);
  BackRightWheel.write(180);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  //Stop
  FrontLeftWheel.write(90);
  FrontRightWheel.write(90);
  BackLeftWheel.write(90);
  BackRightWheel.write(90);
}

//Setup
void setup(){
  startupMovement();
}

//Loop
void loop(){
  //Stop when Front Bumper Hits something
  if(analogRead(3)<100){
    FrontLeftWheel.write(90);
    FrontRightWheel.write(90);
    BackLeftWheel.write(90);
    BackRightWheel.write(90);
  }
  //When Front Button is Pressed, The Vehicle Moves Forward for 3 Seconds
  if(analogRead(2)>500){
    FrontLeftWheel.write(180);
    FrontRightWheel.write(0);
    BackLeftWheel.write(180);
    BackRightWheel.write(0);
    digitalWrite(6, HIGH);
    delay(3000);
    FrontLeftWheel.write(90);
    FrontRightWheel.write(90);
    BackLeftWheel.write(90);
    BackRightWheel.write(90);
    digitalWrite(6, LOW);
  }
  //When Middle Button is Pressed, The Red LED Lights up and, The Vehicle Moves Backwards for 3 Seconds
  if(analogRead(1)>500){
    FrontLeftWheel.write(0);
    FrontRightWheel.write(180);
    BackLeftWheel.write(0);
    BackRightWheel.write(180);
    digitalWrite(5, HIGH);
    delay(3000);
    FrontLeftWheel.write(90);
    FrontRightWheel.write(90);
    BackLeftWheel.write(90);
    BackRightWheel.write(90);
    digitalWrite(5, LOW);
  }
  //When Potentiometer is turned to the Right, The vehicle Turns right
  if(analogRead(0)>800){
    FrontLeftWheel.write(180);
    FrontRightWheel.write(180);
    BackLeftWheel.write(180);
    BackRightWheel.write(180);
    delay(5);
    FrontLeftWheel.write(90);
    FrontRightWheel.write(90);
    BackLeftWheel.write(90);
    BackRightWheel.write(90);
  }
  //When Potentiometer is truned to the Left, The Vehicle Turns Left
  if(analogRead(0)<625){
    FrontLeftWheel.write(0);
    FrontRightWheel.write(0);
    BackLeftWheel.write(0);
    BackRightWheel.write(0);
    delay(5);
    FrontLeftWheel.write(90);
    FrontRightWheel.write(90);
    BackLeftWheel.write(90);
    BackRightWheel.write(90);
  }
 }
