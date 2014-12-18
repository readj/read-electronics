// Jacob Read
//Piezo Exercise

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

// ascending Scale Function
void scaleUp(){
  int scale [] = {c4, d4, e4, f4, g4, an4, b4, c5};
  for (int n = 0; n < 8; n++){
    tone(speaker, scale [n], q);
    delay(q);
  }
}//end scaleUp()
//Function Twinkle 1
void twinkle1(){
 //Notes for Twinkle Line 1
  int lineANotes [] = {c4, c4, g4, g4, an4, an4, g4, f4, f4, e4, e4, d4, d4, c4};
  int lineARhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, h};
  
  for (int n = 0; n < 14; n++){
    tone(speaker, lineANotes [n], lineARhythm[n]);
    delay(lineARhythm[n]);
  }
}//end twinkle1

//Funtion Twinkle 2
void twinkle2(){
  //Notes for Twinkle Line 2
  int lineBNotes [] = {g4, g4, f4, f4, e4, e4, d4, g4, g4, f4, f4, e4, e4, d4};
  int lineBRythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, q, h};

  for (int n = 0; n<14; n++){
    tone (speaker, lineBNotes [n], lineBRythm[n]);
    delay (lineBRythm[n]);
  }
}//end twinkle2

void setup(){
  //Set Speaker Pin to Output
  pinMode(speaker, OUTPUT);
}//end setup

void loop(){
  scaleUp();
  twinkle1();
  twinkle2();
  twinkle1();
}//end loop
