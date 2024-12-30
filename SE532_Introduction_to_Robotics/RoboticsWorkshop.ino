int SensorPin = 2;
int OutputPin = 13;

void setup() {
  pinMode(OutputPin, OUTPUT);
  pinMode(SensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorValue = digitalRead(SensorPin);
  
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue);
  delay(1000);
   if (SensorValue==LOW){ // LOW MEANS Object Detected
    digitalWrite(OutputPin, HIGH);
  }
  else
  {
    digitalWrite(OutputPin, LOW); 
  }
}