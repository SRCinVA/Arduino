//remember: this is to create the LCD object in the program:
# include <LiquidCrystal.h>
int re = 7;
int en = 8;
int dh = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,dg,d7)

int trigPin = 2;
int echoPin = 3;
float pingTravelTime; // we'll be reading this one
float  pingTravelDistance;
float distanceToTarget;
int dt (500);
void setup() {

lcd.begin(16,2): //the dimensions of the lcd
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop() { // we need to go LOW -> HIGH -> LOW for a clear signal
digitalWrite(trigPin,LOW); // start LOW
delayMicroseconds(10);
digitalWrite(trigPin, HIGH); // stay HIGH until ...
delayMicroseconds(10);
digitalWrite(trigPin, LOW); // ... the ping comes back, then goes LOW again
pingTravelTime=pulseIn(echoPin, HIGH); // this measures the length of the HIGH pulse (for assessing distance?)
                    // we're looking for a HIGH pulse from the echo pin.
                    // we'd no longer need an oscilloscope
delay(25);
pingTravelDistance = (pingTravelTime * 765. * 5280 * 12.)/(3600. * 1000000);
distanceToTarget = pingTravelDistance/2;
Serial.print ("Your Distance to Target is: ");
Serial.print(distanceToTarget);
Serial.println(" inches");
// you can still print to the serial monitor, but below is for the LCD
lcd.setCursor(0,0);
lcd.print("Target Distance");
lcd.setCursor(0,1); // need it to be column 0, row 1 to go to the next line.
lcd.print(distanceToTarget);
lcd.print(" inches")
delay(dt);
lcd.clear();
}