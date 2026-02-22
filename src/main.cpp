#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   // SOS
  // S
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);

  // O
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);

  // S
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}