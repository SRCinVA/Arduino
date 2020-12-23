int myPin=A2;
int readVal; // will just read it; only need to declare it. For voltage.
float V2; // same as above; also for voltage.
int dt=250;

void setup() {

    Serial.begin(9600);

}

void loop() {

    readVal=analogRead(myPin);
    V2=(5./1023.)*readVal;
    Serial.print("Potentiometer Voltage is: ");
    Serial.println(V2);
    delay(dt);
}

// if the Serial monitor is open, the program won't download. Close it and then try again.