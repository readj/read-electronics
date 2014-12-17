//Jacob Read
//Lab 02

//All work here is honestly obtained and is my own.
//Function_01
void LEDBlinkChaseStart(){
  int pins [] = {9,8,7,6,5,4,3,2};
  for ( int i = 0; i < 8; i++){
    digitalWrite(pins[i], HIGH);
    delay(250);
    digitalWrite(pins[i], LOW);
    delay(250);
  }
  for ( int i = 6; i > -1; i--) {
    digitalWrite(pins[i], HIGH);
    delay(250);
    digitalWrite(pins[i], LOW);
    delay(250);
  }
}
//Function_02
void LEDBlinkChase(){
  int pins [] = {9,8,7,6,5,4,3,2};
  for ( int i = 1; i < 8; i++){
    digitalWrite(pins[i], HIGH);
    delay(250);
    digitalWrite(pins[i], LOW);
    delay(250);
  }
  for ( int i = 6; i > -1; i--) {
    digitalWrite(pins[i], HIGH);
    delay(250);
    digitalWrite(pins[i], LOW);
    delay(250);
  }
}
//Function_03
void AllLightsOn(){
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}
//Function_04
void ReverseLEDBlinkChase(){
  int pins [] = {9,8,7,6,5,4,3,2};
  for ( int i = 1; i < 8; i++){
    digitalWrite(pins[i], LOW);
    delay(250);
    digitalWrite(pins[i], HIGH);
    delay(250);
  }
  for ( int i = 7; i > -1; i--) {
    digitalWrite(pins[i], LOW);
    delay(250);
    digitalWrite(pins[i], HIGH);
    delay(250);
  }
}
//Setup for Program
void setup(){
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  LEDBlinkChaseStart();
}

//Loop for Program
void loop(){
  LEDBlinkChase();
  AllLightsOn();
  ReverseLEDBlinkChase();
}
