#include <Arduino.h>
#include <DHT.h>


DHT dht(4, DHT11); 

void setup() {
  Serial.begin(115200);
  dht.begin();
  delay(3000); 
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();



  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%, Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  delay(3000); 
}