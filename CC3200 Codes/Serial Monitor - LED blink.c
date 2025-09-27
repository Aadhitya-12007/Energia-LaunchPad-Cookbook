// Code for CC3200 LaunchPad (Controls the RED LED)
// Pin 9 is the RED LED

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  
  // Set the LED pin as an output
  pinMode(9, OUTPUT);
  
  // Print instructions to the Serial Monitor
  Serial.println("Enter '1' to turn the LED ON or '0' to turn it OFF.");
}

void loop() {
  // Check if there is serial data waiting
  if (Serial.available() > 0) {
    // Read the incoming character
    char input = Serial.read();

    // Turn the LED ON for '1'
    if (input == '1') {
      digitalWrite(9, HIGH);
      Serial.println("LED ON");
    }
    // Turn the LED OFF for '0'
    else if (input == '0') {
      digitalWrite(9, LOW);
      Serial.println("LED OFF");
    }
  }
}
