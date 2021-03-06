int myPin=A2;
int readVal; // will just read it; only need to declare it. For voltage.
float V2; // same as above; also for voltage.
int dt=250;
int redPin=9;

void setup() {

    Serial.begin(9600);
    pinMode(myPin,INPUT);
    pinMode(myPin,OUTPUT);
}

void loop() {

    readVal=analogRead(myPin);
    V2=(5./1023.)*readVal;
    Serial.print("Potentiometer Voltage is: ");
    Serial.println(V2);
    if (V2==5.0){ //turns on when it's 5.
        digitalWrite(redPin,HIGH);
    }
    if (V2!=5.0) { //turns off at any other voltage.
        digitalWrite(redPin,LOW);
    }

    //if(V2>2 && V2<3){
        // digitalWrite(redPin,HIGH)
        //}
    //if (V2<2 || V2>3){
        // digitalWrite(redPin, LOW)
        //}

    delay(dt);
}

// if the Serial monitor is open, the program won't download. Close it and then try again.
// && for 'and' and || for 'or'