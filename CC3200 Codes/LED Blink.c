// Code for CC3200 LaunchPad (blinks the red onboard LED)

void setup() {
  // Initialize the RED_LED pin (PF_1) as an output.
  pinMode(PF_1, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(PF_1, HIGH);
  delay(1000); // Wait for 1000 milliseconds

  // Turn the LED off
  digitalWrite(PF_1, LOW);
  delay(1000); // Wait for 1000 milliseconds
}
