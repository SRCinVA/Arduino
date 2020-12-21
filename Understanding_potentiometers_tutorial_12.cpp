// Understanding potentiometers

int myVoltPin=A2;
int readVal;
float V2;
int dealyT=250;

void setup() {
Serial.begin(9600); //just make sure this is synced up with the Serial rate monitor's Baud rate.
}

void loop() {
readVal=analogRead(myVoltPin);  // remember--that voltage comes back between 0 and 1023, so it needs to be converted.
V2=(5./1023.)*readVal;  //without floats, it'll round to the nearest int--not good enough.
Serial.println(V2);
delay(delayT);
}

//As he turns the knob to the left, the voltage goes down in real-time. It was pretty cool.