// Classwork LED Array Assessment
// Jacob Read
// All work here is honestly obtained and is my own.

// Objects in Program
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
}

//Loop for Program
void loop(){
  LEDBlinkChase();
}
