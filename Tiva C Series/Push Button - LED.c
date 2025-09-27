// Code for Tiva C Series LaunchPad

// Pin 33 is PF_4 (Onboard Button SW1)
// Pin 29 is PF_0 (Onboard Button SW2)
// Pin 30 is PF_1 (RED component of the RGB LED)
// Pin 31 is PF_2 (BLUE component of the RGB LED)

void setup() {
  pinMode(33, INPUT_PULLUP); // Button SW1
  pinMode(29, INPUT_PULLUP); // Button SW2
  pinMode(30, OUTPUT);       // RED LED
  pinMode(31, OUTPUT);       // BLUE LED
}

void loop() {
  // Read the state of both buttons
  int button_SW1 = digitalRead(33);
  int button_SW2 = digitalRead(29);

  // Control the RED LED with SW1
  if (button_SW1 == 0) {
    digitalWrite(30, HIGH);
  } else {
    digitalWrite(30, LOW);
  }

  // Control the BLUE LED with SW2
  if (button_SW2 == 0) {
    digitalWrite(31, HIGH);
  } else {
    digitalWrite(31, LOW);
  }
}
