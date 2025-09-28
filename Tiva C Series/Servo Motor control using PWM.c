// Code for Tiva C Series LaunchPad
#include <Servo.h>
Servo myservo; // Create a servo object

// Pin 2 (PB_6)
const int servoPin = 2;

void setup() {
  // Attach the servo on pin 2 to the servo object
  myservo.attach(servoPin);
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Sweep the servo arm from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myservo.write(angle);
    delay(15);
  }

  // Sweep the servo arm back from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myservo.write(angle);
    delay(15);
  }
}
