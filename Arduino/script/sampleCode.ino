#include "arduino_secrets.h"
const int ledPin = 13;  // Built-in LED on most Arduino boards
const int buttonPin = 2;  // Push button on pin 2

int buttonState = 0;  // Variable to store button state

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
  
  // Set button pin as input with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Read the state of the pushbutton
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (LOW because of pull-up resistor)
  if (buttonState == LOW) {
    // Turn LED on
    digitalWrite(ledPin, HIGH);
    Serial.println("Button pressed, LED ON");
  } else {
    // Turn LED off
    digitalWrite(ledPin, LOW);
    Serial.println("Button released, LED OFF");
  }

  // Small delay to debounce
  delay(50);
}