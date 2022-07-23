#include<DHT.h>
#define DHTPIN A1
#define DHTPIN dht11
DHT dht(DHTPIN, DHTTYPE);
void setup() {

Serial.begin(9600);
}

void loop() {
int h = dht.readHUMIdity();
int t = dht.readTemperature();
 
Serial.print("Humidity :   ");
Serial.println(h);
Serial.print("Temperature");
Serial.print(t);

delay(1000);
}
