int lightPin = A0;
int buzzPin = 8;
int lightVal;
int delayT;

void setup()  {

pinMode(A0, INPUT);  // the photodetector. Would "lightPin" work as well?
pinMode(buzzPin, OUTPUT);

}

void loop() {

lightVal=analogRead(lightPin);
delayT=(9./550.) * lightVal - (9. * 200./550) + 1.;
digitalWrite(buzzPin, HIGH);
delay(delayT);
digitalWrite(buzzPin, LOW);
delay(delayT);
}