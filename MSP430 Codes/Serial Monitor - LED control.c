// Code for MSP430 LaunchPad (Controls the RED LED)
// Pin 2 is P1.0 (RED LED)

void setup() {
  // Start the serial communication at 9600 bits per second
  Serial.begin(9600);
  
  // Set the LED pin as an output
  pinMode(2, OUTPUT);
  
  // Print instructions to the Serial Monitor
  Serial.println("Enter '1' to turn the LED ON or '0' to turn it OFF.");
}

void loop() {
  // Check if there is data available to read from the serial port
  if (Serial.available() > 0) {
    // Read the incoming character
    char input = Serial.read();

    // If the input is '1', turn the LED on
    if (input == '1') {
      digitalWrite(2, HIGH);
      Serial.println("LED ON");
    }
    // If the input is '0', turn the LED off
    else if (input == '0') {
      digitalWrite(2, LOW);
      Serial.println("LED OFF");
    }
  }
}
