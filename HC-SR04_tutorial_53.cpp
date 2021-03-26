int trigPin = 12;
int echoPin = 11;
int pingTravelTime; // we'll be reading this one

void setup() {

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop() { // we need to go LOW -> HIGH -> LOW for a clear signal
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);

}