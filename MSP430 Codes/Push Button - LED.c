// Code for MSP430 LaunchPad

// Pin 5 is P1.3 (Onboard Button S2)
// Pin 2 is P1.0 (RED LED)

void setup() {
  // Set up the button pin with an internal pull-up resistor
  pinMode(5, INPUT_PULLUP);
  // Set up the LED pin as an output
  pinMode(2, OUTPUT);
}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(5);

  // The pin will be LOW when the button is pressed
  if (buttonState == 0) {
    digitalWrite(2, HIGH); // Turn the RED LED on
  } else {
    digitalWrite(2, LOW);  // Turn the RED LED off
  }
}
