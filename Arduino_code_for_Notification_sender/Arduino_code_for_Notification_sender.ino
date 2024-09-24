#include <SoftwareSerial.h>

// Set up software serial communication for Bluetooth
SoftwareSerial Bluetooth(10, 11); // RX, TX

// Button pin
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  // Start serial communication for monitoring
  Serial.begin(9600);

  // Start Bluetooth serial communication
  Bluetooth.begin(9600);
  
  // Set the button pin as input
  pinMode(buttonPin, INPUT);
  
  Serial.println("Waiting for button press...");
}

void loop() {
  // Read the button state
  buttonState = digitalRead(buttonPin);
  
  // If the button is pressed
  if (buttonState == HIGH) {
    // Send message over Bluetooth
    Bluetooth.println("Button Pressed! Sending notification...");

    // For monitoring in Serial Monitor
    Serial.println("Notification sent over Bluetooth!");
    
    // Delay to avoid multiple triggers
    delay(1000);
  }
}
