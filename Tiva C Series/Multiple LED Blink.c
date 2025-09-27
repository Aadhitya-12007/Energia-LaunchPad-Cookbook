// Code for Tiva C Series LaunchPad (cycles the onboard RGB LED)

// Pin 30 is PF_1 (RED)
// Pin 31 is PF_2 (BLUE)
// Pin 32 is PF_3 (GREEN)

void setup() {
  pinMode(30, OUTPUT); // RED
  pinMode(32, OUTPUT); // GREEN
  pinMode(31, OUTPUT); // BLUE
}

void loop() {
  // Blink Red
  digitalWrite(30, HIGH);
  delay(100);
  digitalWrite(30, LOW);
  delay(100);

  // Blink Green
  digitalWrite(32, HIGH);
  delay(100);
  digitalWrite(32, LOW);
  delay(100);

  // Blink Blue
  digitalWrite(31, HIGH);
  delay(100);
  digitalWrite(31, LOW);
  delay(100);
}
