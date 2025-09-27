// Code for MSP430 LaunchPad (blinks the red onboard LED)

void setup() {
  // Initialize the RED_LED pin (P1_0) as an output.
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(RED_LED, HIGH);
  delay(1000); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(RED_LED, LOW);
  delay(1000); // Wait for a second
}
