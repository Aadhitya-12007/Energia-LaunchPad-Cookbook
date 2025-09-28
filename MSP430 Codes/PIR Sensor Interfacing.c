// Code for MSP430 LaunchPad using Pin 8 for motion sensor input
const int sensorPin = 8;

void setup() {
  // Set the sensor pin as an input
  pinMode(sensorPin, INPUT);
  
  // Start serial communication to send messages to the computer
  Serial.begin(9600);
}

void loop() {
  // Read the state of the sensor pin
  int motionState = digitalRead(sensorPin);

  // PIR sensors output HIGH (1) when motion is detected
  if (motionState == 1) {
    Serial.println("Motion Detected");
  } else {
    Serial.println("No motion");
  }
  
  delay(500); // Wait half a second before checking again
}
