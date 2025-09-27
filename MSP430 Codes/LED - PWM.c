// Code for MSP430 LaunchPad (Fades the onboard GREEN LED)

void setup() {
  // Set up the GREEN LED pin as an output.
  pinMode(14, OUTPUT);
}

void loop() {
  // Fade in (from min to max brightness)
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(14, brightness);
    delay(10); // Adjust delay for fade speed
  }

  // Fade out (from max to min brightness)
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(14, brightness);
    delay(10); // Adjust delay for fade speed
  }
}
