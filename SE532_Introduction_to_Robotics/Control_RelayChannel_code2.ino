// Define the Arduino pin connected to the relay
const int relayPin = 2;  // Change this to the actual pin you're using

void setup() {
  // Set the relay pin as an OUTPUT
  pinMode(relayPin, OUTPUT);
  
  // Initially turn the relay OFF
  digitalWrite(relayPin, LOW);
}

void loop() {
  // Turn the relay ON for 2 seconds
  digitalWrite(relayPin, HIGH);
  delay(2000);  // Wait for 2 seconds
  
  // Turn the relay OFF for 2 seconds
  digitalWrite(relayPin, LOW);
  delay(2000);  // Wait for 2 seconds
}
