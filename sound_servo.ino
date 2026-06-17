#include <Servo.h>

const int soundPin  = 10;
const int servoPin  = 6;

const int openAngle  = 90;
const int closedAngle = 0;
const int holdTime   = 3000;

Servo myServo;

void setup() {
  pinMode(soundPin, INPUT);
  myServo.attach(servoPin);
  myServo.write(closedAngle);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(soundPin) == HIGH) {
    Serial.println("Sound detected — servo moving!");
    myServo.write(openAngle);
    delay(holdTime);
    myServo.write(closedAngle);
  }
  delay(100);
}
