// Code for CC3200 LaunchPad (cycles through onboard LEDs)

void setup() {
  pinMode(9, OUTPUT);  // RED LED
  pinMode(10, OUTPUT); // GREEN LED
  pinMode(8, OUTPUT);  // ORANGE LED
}

void loop() {
  // Blink Red
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  delay(100);

  // Blink Green
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  delay(100);

  // Blink Orange
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
}
