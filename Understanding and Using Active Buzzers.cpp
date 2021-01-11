// Understanding and Using Active Buzzers

int potVal;
int buzzPin = 8;
int potPin = A3;
//String msg="Please input your number";
//int dt = 1000;

void setup() {

Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);

}

void loop() {

//Serial.println(msg);
//while (Serial.available) == 0 {

//}
potVal = analogRead(potPin);
if (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    //delay(dt);
    //digitalWrite(buzzPin, LOW);
    potVal = analogRead(potPin); //you need to get it to read again
    Serial.println(potVal);
    //there might be some jitter sounds right around 1000.
}
digitalWrite(buzzPin,LOW); //when it goes below 1000, it will exit the loop and end here.
}