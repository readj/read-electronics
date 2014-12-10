// Jacob Read
// Lab  01

//Functions
void printHappy (String name) {
  String result = "Happy Birthday " + name;
  Serial.println(result);
}


float computeArea(float wid, float hei) {
  float area = wid*hei;
  return area;
}

void printGospels() {
 //Array 
  String gospels [] = {"Matthew","Mark","Luke","John"};
  Serial.println("The Gospels are: ");
  for ( int i = 0; i < 4; i++){
    Serial.println(gospels[i]);
  }
}  

//Activity 1
void function1() {
  Serial.println("I am an Arduino and communicate at");
  Serial.println("9 600 Baud rate.  Ports 0 and 1 are used");
  Serial.println("for serial communication.");
  Serial.println(" ");
  Serial.println("Serial communcation works well for debugging");
  Serial.println("and monitoring sensor values during the");
  Serial.println("execution of a program");
}
//Activity 2
void function2a(int x, int y) {
  Serial.println ((x/2)*y);
}

void function2b(int x, int y) {
  Serial.println (2*x+x*y);
}
  
void function3() {
  //Array
  String MovieCharacters [] = {"Boba Fett","Han Solo","Indiana Jones","Hal 9000", "James Bond"};
  Serial.println("My favorite movie characters are: ");
  for ( int i = 0; i < 5; i++)
  Serial.println(MovieCharacters[i]);
}

void function4() {
  String NumberSequence [] = {"1","2","3","4","5","6","7","8"};
  for (int i = 0; i < 8; i++) {
    Serial.println(NumberSequence[i]);
  }
  for (int i = 7; i > -1; i--) {
    Serial.println(NumberSequence[i]);
  }
  for (int i = 1; i < 8; i+=2) {
    Serial.println(NumberSequence[i]);
  }
  for (int i = 0; i < 8; i+=2) {
    Serial.println(NumberSequence[i]);
  }
  for (int i = 6; i > -2; i-=2) {
    Serial.println(NumberSequence[i]);
  }
  for (int i = 7; i > -1; i-=2) {
    Serial.println(NumberSequence[i]);
  }
}  

void function5() {
  String CMajorScale [] = {"C","D","E","F","G","A","B","C"};
  for (int i = 0; i < 8; i++) {
    Serial.println(CMajorScale[i]);
  }
  for (int i = 7; i > -1; i--) {
  Serial.println(CMajorScale[i]);
  }
}

void printFibonacci(int n) {
  int a=0;
  int b=1;
  int Fibonacci;
  int i=0;
  for (i=0; i<n; i++){
    Fibonacci= a+b;
    Serial.println(Fibonacci);
    a=b;
    b=Fibonacci;
  }
}
//Area of a Triangle
void function7(int x, int y){
  Serial.println((x*y)/2);
}

// Wild numbers
void function8() {
 for (int i = 0; i < 100000; i++) {
 Serial.println(i*10);
 }
}

//a. I expect the numbers to increase by 10.
//b. The numbers increased by 10 until they hit 32750 and then they started counting down until they hit 0 at which point they started going up again.
//c. The numbers go until they hit the max limit and then they turn to negative.  You can change this by modifying the maximum value or by change the int data type to a long.

void function9(){
  int x;
  long sum=0;
  for (x=0; x<1000; x++){
    
   if ((x%3==0)||(x%5==0)){
     sum+=x;}
   }
   Serial.println(sum);
  }  
void function10(int y){
 String RandomWords [] = {"Foot","Child","Bike","Guitar","Football","Arduino"}; 
  randomSeed(analogRead(0));
  String con= "";
  for(int x=0; x<y; x++){
  int t = random(5);
    Serial.println(RandomWords[t])+" ";
}

}
void setup() {
 Serial.begin (9600); // Start Serial Communication 
 Serial.println("Hola, que passa bro?");
 Serial.println("I'm Hal");
 printHappy("Mr. Michaud");
 printHappy("Reed");
 Serial.println(computeArea(30, 40));
 function1();
 printGospels();
 function2a(120,512);
 function2b(97,32);
 function3();
 function4();
 function5();
 printFibonacci(10);
 function7(4,8);
 //function8();
 function9();
 function10(100);
 } //end setup

void loop() {
 // no code here today
}
// end loop
