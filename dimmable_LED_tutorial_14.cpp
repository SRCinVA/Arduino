int potPin=A1;
int gPin=6;
int potVal;
float LEDVal;

void setup*() {

pinMode(potPin,INPUT);
pinMode(gPin,OUTPUT);
Serial.begin(9600);

}


void loop() {

potVal=analogRead(potPin);
LEDVal=(255./1023.)*potVal;
analogWrite(gPin,LEDVal);
Serial.println(LEDVal);

}


/*
the pot value goes from 0 to 1023
the LED value goes from 0 to 255

for the slope:

    LEDVal2 - LEDVal1
m = ----------------
    potVal2 - potVal1

    --so--

LEDval = (255/1023)*potVal

//