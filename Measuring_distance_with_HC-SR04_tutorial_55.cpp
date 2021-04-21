int trigPin = 12;
int echoPin = 11;
float pingTravelTime; // we'll be reading this one
float  pingTravelDistance;
float distanceToTarget;

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
pingTravelTime=pulseIn(echoPin, HIGH); // this measures the legnth of the HIGH pulse (for assessing distance?)
                    // we're looking for a HIGH pulse from the echo pin.
                    // we'd no longer need an oscilloscope
delay(25);
pingTravelDistance = pingTravelTime * 765. * 5280 ;
Serial.print(pingTravelTime);
}