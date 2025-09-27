// Code for CC3200 LaunchPad
// This code acts as a bridge between the PC (Serial) and an external device (Serial1).
// Connect external UART device: TX to pin 18 (RX1), RX to pin 17 (TX1)

// Pin 9 is the RED LED

void setup() {
  pinMode(9, OUTPUT);       // Initialize the RED LED pin
  Serial.begin(115200);   // Serial port for PC communication
  Serial1.begin(115200);  // Hardware UART on pins 17(TX)/18(RX)
}

void loop() {
  // Check for data from the external device on Serial1
  if (Serial1.available()) {
    char a = Serial1.read();
    Serial.write(a); // Send it to the PC

    // Control LED based on data from the external device
    if (a == '1') {
      digitalWrite(9, HIGH);
    } else if (a == '0') {
      digitalWrite(9, LOW);
    }
  }

  // Check for data from the PC on Serial
  if (Serial.available()) {
    char a = Serial.read();
    Serial1.write(a); // Send it to the external device
  }
}
