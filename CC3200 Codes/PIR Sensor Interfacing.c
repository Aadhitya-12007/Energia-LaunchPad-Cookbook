// Code for CC3200 LaunchPad using Pin 15 for motion sensor input
const int sensorPin = 15;

void setup() {
  // Configure the sensor pin as an input
  pinMode(sensorPin, INPUT);

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the digital value from the sensor
  int motionState = digitalRead(sensorPin);

  // Check if the sensor output is HIGH
  if (motionState == 1) {
    Serial.println("Motion Detected");
  } else {
    Serial.println("No motion");
  }

  delay(500); // Pause before the next reading
}
