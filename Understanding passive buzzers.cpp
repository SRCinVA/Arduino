int buzzPin=8;
int buzzTime=1;
int buzzTime2=900;
int potVal;
int potPin=A1;
int toneVal;

void setup(){
pinMode(buzzPin,OUTPUT);
pinMode(potPin, INPUT);

}

void loop() {
/*
digitalWrite(buzzPIN, HIGH);
delayMicroseconds(buzzTime2);  // there's an audible difference in pitch
digitalWrite(buzzPin,LOW);     // when changing the delay time.
delayMicroseconds(buzzTime2);
*/

potVal=analogRead(potPin);
toneVal = (9940. / 1023.) * potVal + 60; // we couldn't hear lower than 60 

digitalWrite(buzzPin, HIGH);
delayMicroseconds(toneVal); // there's an audible difference in pitch
digitalWrite(buzzPin, LOW);                                           // when changing the delay time.
delayMicroseconds(toneVal);
}

// this ends up producing a changeable tone with varying pitches