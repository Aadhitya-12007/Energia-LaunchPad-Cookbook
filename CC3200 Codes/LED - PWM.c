// Code for CC3200 LaunchPad (Fades the onboard RED LED)
// NOTE: Pin 9 corresponds to the RED LED and supports PWM.

void setup() {
  // Set up the RED LED pin
  pinMode(9, OUTPUT);
}

void loop() {
  // Fade in from off to full brightness
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(9, brightness);
    delay(5);

  // Fade out from full brightness to off
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(9, brightness);
    delay(5);
  }
}
