int potVal;
int delayTime=100;
int potPin=A0;
int redPin=7;


void setup(){

Serial.begin(9600);
pinMode(potPin,INPUT)
pinMode(redPin, OUTPUT);
}

void loop() {
/*
    j=1;
    while (j<=10)
        {
            Serial.println(j);
            delay(delayTime);
            j=j+1;
        }
*/
    potVal=analogRead(potPin);
    Serial.println(potVal);
    delay(delayTime);

    while (pot>1000){
        digitalWrite(redPin, HIGH); //issuing a warning if the potVal is over 1000.
        potVal=analogRead(potPin);  //need to read it again; otherwise, it would never turn off.
        Serial.println(potVal);
        delay(delayTime);
    }
    digitalWrite(redPin,LOW); //when it's under 1000, it falls into this line of code and turns off.
}

