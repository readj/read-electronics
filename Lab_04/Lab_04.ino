//Jacob Read
//Lab 04

//Define Sensor Input Port and Value
int sensorPin = 0;
int sensorValue = 0;

//Define Speaker Port
int speaker = 13;

//Variables for Rythm: (dh and dq stand for dotted half and dotted quarter)

int tempo = 1000;
int dhtempo = 750;
int dqtempo = 187.5;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;
int dh = dhtempo;
int dq = dqtempo;

//Define Pitches for Song

int a0 = 0;
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int a4 = 440;
int b4 = 494;
int c5 = 523;
int d5 = 587;
int e5 = 659;
int f5 = 740;
int g5 = 783;
int a5 = 880;

//Song Line 1
void Line1(){
  int Line1Notes [] = {d4, d5, a4, g4, g5, a4, f5, a4};
  int Line1Rhythm [] = {e, e, e, e, e, e, e, e};
  for (int n = 0; n < 9; n++){
    tone(speaker, Line1Notes[n], Line1Rhythm[n]);
    delay(1.5*Line1Rhythm[n]);
  }
}

//Song Line 2
void Line2(){
  int Line2Notes [] = {e4, d5, a4, g4, g5, a4, f5, a4};
  int Line2Rhythm [] = {e, e, e, e, e, e, e, e};
  for (int n = 0; n < 9; n++){
    tone(speaker, Line2Notes[n], Line2Rhythm[n]);
    delay(1.5*Line2Rhythm[n]);
  }
}  

//Song Line 3
void Line3(){
  int Line3Notes [] = {g4, d5, a4, g4, g5, a4, f5, a4};
  int Line3Rhythm [] ={e, e, e, e, e, e, e, e};
  for (int n = 0; n < 9; n++){
    tone(speaker, Line3Notes[n], Line3Rhythm[n]);
    delay(1.5*Line3Rhythm[n]);
  }
}

//Song Line 4
void Line4(){
  int Line4Notes [] = {e5, a4, d5, a4, e5, a4, f5, a4, g5, a4, f5, a4, e5, a4, d5, a4};
  int Line4Rythm [] = {e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e};
  for (int n = 0; n < 19; n++){
    tone (speaker, Line4Notes[n], Line4Rythm[n]);
    delay(1.5*Line4Rythm[n]);
  }
}

//Song Line 5
void Line5(){
  int Line5Notes [] = {a5, g5, f5, g5, a5, f5, e5, d5, g5, f5, d5, g5, g5, a0, g5, f5, e5, d5, d5, g5, f5, d5, g5, f5, d5, g5, f5, d5, g5, a5, g5, f5};
  int Line5Rythm [] = {dh, e, e, q, e, e, q, e, q, e, e, dq, q, e, e, e, e, q, e, e, q, e, q, e, e, q, e, e, e, q, q, h};
  for (int n = 0; n < 33; n++){
    tone (speaker, Line5Notes[n], Line5Rythm[n]);
    delay(1.5*Line5Rythm[n]);
  }
}
//Setup
void setup(){
  pinMode(speaker, OUTPUT);
}//end Setup

//Loop
void loop(){
  if(analogRead(0) > 1000){
    Line1();
    Line1();
    Line2();
    Line2();
    Line3();
    Line3();
    Line4();
    Line5();
}
}//end Loop
