// Code for Tiva C Series LaunchPad (Fades the onboard BLUE LED)

void setup() {
  // Set up the BLUE LED pin as an output.
  pinMode(31, OUTPUT);
}

void loop() {
  // Ramp up the brightness (fade in)
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(31, brightness);
    delay(10);
  }

  // Ramp down the brightness (fade out)
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(31, brightness);
    delay(10);
  }
}
