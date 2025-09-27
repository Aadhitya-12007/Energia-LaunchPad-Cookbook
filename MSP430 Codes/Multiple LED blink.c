// Code for MSP430 LaunchPad (blinks the onboard RED and GREEN LEDs)
// Pin 2 is P1.0 (RED LED)
// Pin 14 is P1.6 (GREEN LED)

void setup() {
  pinMode(2, OUTPUT);  // RED LED
  pinMode(14, OUTPUT); // GREEN LED
}

void loop() {
  // Blink Red
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);

  // Blink Green
  digitalWrite(14, HIGH);
  delay(100);
  digitalWrite(14, LOW);
  delay(100);
}
