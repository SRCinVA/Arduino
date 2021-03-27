int trigPin = 12;
int echoPin = 11;
int pingTravelTime; // we'll be reading this one

void setup() {

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
delay(25);
}