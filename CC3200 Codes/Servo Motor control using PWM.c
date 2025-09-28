// Code for CC3200 LaunchPad
#include <Servo.h>

Servo myservo; // Create a servo object
const int servoPin = 7;

void setup() {
  // Attach the servo on pin 7 to the servo object
  myservo.attach(servoPin);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Move from one end to the other
  for (int angle = 0; angle <= 180; angle++) {
    myservo.write(angle);
    delay(20);
  }
  // Move back to the start
  for (int angle = 180; angle >= 0; angle--) {
    myservo.write(angle);
    delay(20);
  }
}
