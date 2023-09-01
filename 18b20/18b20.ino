#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(2); //pin 2 utilizado para o pino DQ
DallasTemperature sensors(&oneWire);

void setup() {
  sensors.begin();
  Serial.begin(9600);
}

void loop() {
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);
  Serial.print("Temperatura em Celsius: ");
  Serial.println(tempC);
  delay(1000);
}