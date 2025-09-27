// Code for Tiva C Series LaunchPad (Controls the RED LED)
// Pin 30 is PF_1 (RED component of the RGB LED)

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  
  // Set the LED pin as an output
  pinMode(30, OUTPUT);
  
  // Print instructions to the Serial Monitor
  Serial.println("Enter '1' to turn the LED ON or '0' to turn it OFF.");
}

void loop() {
  // Check if a character has been sent from the Serial Monitor
  if (Serial.available() > 0) {
    // Read the character
    char input = Serial.read();

    // Set the LED HIGH if the character is '1'
    if (input == '1') {
      digitalWrite(30, HIGH);
      Serial.println("LED ON");
    }
    // Set the LED LOW if the character is '0'
    else if (input == '0') {
      digitalWrite(30, LOW);
      Serial.println("LED OFF");
    }
  }
}
