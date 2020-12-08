void setup() {
pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(13,HIGH):
delay(500);
digitalWrite(13,LOW);
delay(500);
}

//note that it doesn't always have to be pin 13, but
// just remember that the pin # needs to be programmed in.