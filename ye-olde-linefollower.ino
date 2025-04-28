#include "header.h"

void setup() {
  Serial.begin(9600);
  pinMode(IR_LEFT, OUTPUT);
  pinMode(IR_RIGHT, OUTPUT);
  pinMode(US_ECHO, INPUT);
  pinMode(US_TRIG, OUTPUT);

  Serial.println("Hello world!");
  Serial.println(IR_LEFT);
}

float duration = 0;
float distance = 0;

void loop() {
  digitalWrite(US_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(US_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(US_TRIG, LOW);
  
  duration = pulseIn(US_ECHO, HIGH);
  distance = (duration * 0.0343) / 2;

  Serial.print("Distance = ");
  Serial.println(distance);
}
