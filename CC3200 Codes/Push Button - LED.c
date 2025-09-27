// Code for CC3200 LaunchPad
// Pin 4  is SW2 button
// Pin 29 is SW3 button
// Pin 9  is RED LED
// Pin 10 is GREEN LED

void setup() {
  pinMode(4, INPUT_PULLUP);  // Button SW2
  pinMode(29, INPUT_PULLUP); // Button SW3
  pinMode(9, OUTPUT);        // RED LED
  pinMode(10, OUTPUT);       // GREEN LED
}

void loop() {
  // Read the state of both buttons
  int button_SW2 = digitalRead(4);
  int button_SW3 = digitalRead(29);

  // Control the RED LED with SW2
  if (button_SW2 == 0) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }

  // Control the GREEN LED with SW3
  if (button_SW3 == 0) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
}
