#include "DHT.h"
#define Type DHT11  // sets up a constant
#include <LiquidCrystal.h>

rs = 7;
en = 8;
d4 = 9;
d5 = 10;
d6 = 11;
d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); // creates  the LCD object

    int sensePin = 2;
DHT HT(sensePin,Type);   // this names the DHT object, where it's connected, and what type
float Humidity;
float TempC;
float TempF;
int setTime = 500;
int dt=1000;

void setup() {
Serial.begin(9600);
HT.begin();   // does not take arguments
delay(setTime); // good general practice to give things time to set up
lcd.begin(16,2) // it has 16 rows and 2 columns
}

void loop() {
Humidity=HT.readHumidity();
TempC=HT.readTemperature();  
TempF=HT.readTemperature(true); //you have to specify "true" for it read Fahrenheit (?!?)

Serial.print("Humidity: ");
Serial.print(Humidity);
Serial.print(" Temperature ");
Serial.print(TempC);
Serial.print(" C ");
Serial.print(TempF);
Serial.print(" F ");
delay(dt);
}