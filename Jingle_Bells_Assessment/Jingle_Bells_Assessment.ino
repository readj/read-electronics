// Jacob Read
//Lab 03

//Define Speaker Port
int speaker = 10;

//Variables for Rythm:

int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//Define pitches for C Scale

int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int an4 = 440;
int b4 = 494;
int c5 = 523;

//Jingle Bells Line 1 Function
void jingle_01(){
  int Line1Notes [] = {e4, e4, e4, e4, e4, e4, e4, g4, c4, d4,e4};
  int Line1Rhythm [] = {q, q, h, q, q, h, q, q, q, q, w};
  
  for (int n = 0; n < 11; n++){
    tone(speaker, Line1Notes [n], Line1Rhythm[n]);
    delay(Line1Rhythm[n]);
  }
}

//Jingle Bells Line 2 Function
void jingle_02(){
  int Line2Notes [] = {f4, f4, f4, f4, f4, e4, e4, e4, e4, d4, d4, e4, d4, g4};
  int Line2Rhythm [] = {q, q, q, q, q, q, q, q, q, q, q, q, h, h};
  
  for (int n = 0; n < 14; n++){
    tone(speaker, Line2Notes [n], Line2Rhythm[n]);
    delay(Line2Rhythm[n]);
  }
}

//Jingle Bells Line 3 Function
void jingle_03(){
  int Line1Notes [] = {e4, e4, e4, e4, e4, e4, e4, g4, c4, d4,e4};
  int Line1Rhythm [] = {q, q, h, q, q, h, q, q, q, q, w};
  
  for (int n = 0; n < 11; n++){
    tone(speaker, Line1Notes [n], Line1Rhythm[n]);
    delay(Line1Rhythm[n]);
  }
}

//Jingle Bells Line 4 Function
void jingle_04(){
  int Line4Notes [] = {f4, f4, f4, f4, f4, e4, e4, e4, g4, g4, f4, d4, c4};
  int Line4Rhythm [] = {q, q, q, q, q,q, q, q, q, q, q, q, w};
  
  for (int n = 0; n < 13; n++){
    tone(speaker, Line4Notes [n], Line4Rhythm[n]);
    delay(Line4Rhythm[n]);
  }
}

void setup(){
  //Set Speaker Pin to Output
  pinMode(speaker, OUTPUT);
}//end setup

void loop(){
  jingle_01();
  jingle_02();
  jingle_03();
  jingle_04();
}//end loop
