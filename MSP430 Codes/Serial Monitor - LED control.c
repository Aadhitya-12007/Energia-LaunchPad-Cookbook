// Code for MSP430 LaunchPad

// Pin 2 is P1.0 (RED LED)

void setup() {
  pinMode(2, OUTPUT);       // Initialize the RED LED pin
  Serial.begin(115200);   // Start serial communication with the computer
}

void loop() {
  // Check if there is data from the computer's Serial Monitor
  if (Serial.available()) {
    char a = Serial.read(); // Read the incoming character

    // Echo the character back to the Serial Monitor
    Serial.write(a);

    // Control the LED based on the character
    if (a == '1') {
      digitalWrite(2, HIGH); // Turn the LED on
    } else if (a == '0') {
      digitalWrite(2, LOW);  // Turn the LED off
    }
  }
}
