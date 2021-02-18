#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(6);
}

void loop() {
  servo.write(90);
  delay(500);
  servo.write(180);
  delay(500);
  servo.write(270);
  delay(500);
  servo.write(0);
  delay(500);
}
