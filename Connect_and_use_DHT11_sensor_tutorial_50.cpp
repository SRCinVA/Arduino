#include <DHT.h>
#define Type DHT11  // sets up a constant
int sensePin=2;
DHT HT(sensePin,Type);   // this names the DHT object, where it's connected, and what type
float Humidity;
float TempC;
float TempF;
int setTime = 500;

void setup() {
Serial.begin(9600);
HT.begin();   // does not take arguments
delay(setTime) // good general practice gives things time to set up
}

void loop() {
Humidity=HT.readHumidity();
TempC=HT.readTemperature();  
TempF=HT.readTemperature(true); //you have to specify true for it read Fahrenheit (?!?)

Serial.print("Humidity: ")
Serial.print(humidity);
Serial.print(" Temperature C ");
Serial.print(tempC);
}