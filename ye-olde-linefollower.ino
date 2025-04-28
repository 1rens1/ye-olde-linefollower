#include "header.h"

void setupPinModes() {
  pinMode(IR_LEFT, OUTPUT);
  pinMode(IR_RIGHT, OUTPUT);
  pinMode(US_ECHO, INPUT);

  pinMode(MOTOR_LEFT_IN1, OUTPUT);
  pinMode(MOTOR_LEFT_IN2, OUTPUT);
  pinMode(MOTOR_RIGHT_IN3, OUTPUT);
  pinMode(MOTOR_RIGHT_IN4, OUTPUT);
}

void setup() {
  Serial.begin(9600);

  setupPinModes();

  Serial.println("Hello world!");
  
  digitalWrite(MOTOR_LEFT_IN1, 100);
  digitalWrite(MOTOR_RIGHT_IN3, 100);
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
