/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void red(int us) {
  digitalWrite(11, HIGH);
  delay(us); 
  digitalWrite(11, LOW);
}

void yellow(int us) {
  digitalWrite(12, HIGH);
  delay(us); 
  digitalWrite(12, LOW);  
  delay(us);
}

void green(int us) {
  digitalWrite(13, HIGH);
  delay(us); 
  digitalWrite(13, LOW);    
}
// the loop function runs over and over again forever
void loop() {
  int i;
  green(2000);
  for(i=0;i<6;i++){
    yellow(100); 
  }
  red(3000);
  
  
}
