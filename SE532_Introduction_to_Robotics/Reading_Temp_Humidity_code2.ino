#include <DHT.h>

#define DHTPIN 2       // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22  // Type of DHT sensor (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);  // Delay for 2 seconds between readings

  // Read temperature in Celsius
  float temperature = dht.readTemperature();

  // Read humidity
  float humidity = dht.readHumidity();

  // Check if any reading failed (e.g., sensor disconnected)
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C, Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }
}
