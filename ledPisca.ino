/**
  Sketch para fazer um LED piscar a cada segundo
  Name: ledPisca.ino
  Purpose: algoritmo para acender um LED

  @author Arquimedes monteiro
*/

#define LED 13

void setup() {
  pinMode(LED, OUTPUT); 
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED, LOW);
  delay(1000);
}