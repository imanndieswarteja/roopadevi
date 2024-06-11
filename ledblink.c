#include <Arduino.h>

// Define the LED pin (GPIO 21 in this example)
const int ledPin = 2;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
}
