// Code for MSP430 LaunchPad
#include <Servo.h>

Servo myservo; // Create a servo object

// Pin 8 (P1.2)
const int servoPin = 8;

void setup() {
  // Attach the servo on pin 8 to the servo object
  myservo.attach(servoPin);
  
  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Sweep from 0 degrees to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myservo.write(angle); // Tell servo to go to 'angle' position
    delay(15);            // Wait 15ms for the servo to reach the position
  }

  // Sweep from 180 degrees back to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myservo.write(angle); // Tell servo to go to 'angle' position
    delay(15);            // Wait 15ms for the servo to reach the position
  }
}
