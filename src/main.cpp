#include <Arduino.h>

void setup() {

  pinMode(0, OUTPUT);    // sets the digital pin 13 as output

  Serial.begin(9600);
  Serial.print("Node ");
}

void loop() {

  digitalWrite(0, HIGH); // sets the digital pin 13 on
  Serial.println("LED On");
  delay(1000);            // waits for a second
  digitalWrite(0, LOW);  // sets the digital pin 13 off
  Serial.println("LED Off");
  delay(1000);            // waits for a second
  // put your main code here, to run repeatedly:
}