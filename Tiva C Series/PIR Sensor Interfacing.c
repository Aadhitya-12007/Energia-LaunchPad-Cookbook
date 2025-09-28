// Code for Tiva C Series LaunchPad using Pin 11 for motion sensor input
const int sensorPin = 11;

void setup() {
  // Set the sensor pin to be a digital input
  pinMode(sensorPin, INPUT);
  
  // Start serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Read the current state of the motion sensor
  int motionState = digitalRead(sensorPin);

  // If the state is HIGH (1), motion was detected
  if (motionState == 1) {
    Serial.println("Motion Detected");
  } else {
    Serial.println("No motion");
  }
  
  delay(500); // A small delay to avoid flooding the Serial Monitor
}
