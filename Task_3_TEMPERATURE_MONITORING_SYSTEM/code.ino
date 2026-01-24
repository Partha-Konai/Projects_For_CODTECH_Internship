#include <DHT.h>
#define DHTPin 2
#define DHTTYPE DHT11
float previousTemp = -1000;
DHT dht(DHTPin, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  if(isnan(temp)){
    Serial.println("Failed to detect the sensor.");
  }
  else if(previousTemp != temp){
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println(" ℃");
    previousTemp = temp;
  }
  delay(2000);
}