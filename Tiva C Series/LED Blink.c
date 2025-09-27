// Code for Tiva C Series LaunchPad (blinks the red onboard LED)
// The RED_LED macro is the standard way to reference it (or PF_1 can be used)

void setup() {
  // Initialize the RED_LED pin (PF_1) as an output.
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(RED_LED, HIGH);
  delay(1000);

  // Turn the LED off
  digitalWrite(RED_LED, LOW);
  delay(1000);
}
