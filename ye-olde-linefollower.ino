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

}

float duration = 0;
float distance = 0;

void loop() {
  // digitalWrite(US_TRIG, LOW);
  // delayMicroseconds(2);
  // digitalWrite(US_TRIG, HIGH);
  // delayMicroseconds(10);
  // digitalWrite(US_TRIG, LOW);

  // duration = pulseIn(US_ECHO, HIGH);
  // distance = (duration * 0.0343) / 2;

  // Serial.print("Distance = ");
  // Serial.println(distance);

  
  // forward
  digitalWrite(MOTOR_LEFT_IN1, HIGH);
  digitalWrite(MOTOR_LEFT_IN2, LOW);
  digitalWrite(MOTOR_RIGHT_IN3, HIGH);
  digitalWrite(MOTOR_RIGHT_IN4, LOW);
  delay(500);
  //backdward
  digitalWrite(MOTOR_LEFT_IN1, LOW);
  digitalWrite(MOTOR_LEFT_IN2, HIGH);
  digitalWrite(MOTOR_RIGHT_IN3, LOW);
  digitalWrite(MOTOR_RIGHT_IN4, HIGH);
  delay(500);
}
