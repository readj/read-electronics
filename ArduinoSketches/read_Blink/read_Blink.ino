// Jacob Read
// LED Blink Project Program

//Blink Function
void blink(){
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
}

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  blink();
}
