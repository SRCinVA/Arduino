int lightPin=A0;
int lightVal;
int dv=250;
int redPin=9;
int greenPin=8;

void setup() {
pinMode(lightPin, INPUT);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);

Serial.begin(9600);
}

void loop() {
lightVal=analogRead(lightPin);

if (lightVal > 350){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
}

if (lightVal < 350){
    digitalWrite(redPin, HIGH);
    digitialWrite(greenPin, LOW);
}

Serial.println(lightVal);
delay(dv);

}