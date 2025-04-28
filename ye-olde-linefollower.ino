#include "header.h"

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_LEFT, OUTPUT);
  pinMode(SENSOR_RIGHT, OUTPUT);

  Serial.println("Hello world!");
  Serial.println(SENSOR_LEFT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
