byte myByte=B00000000; // as a binary
int dt=1500;


void setup() {
Serial.begin(9600)
}


void loop() {
Serial.println(myByte, BIN); // can also print out in HEX
myByte=myByte+1; // this makes a hexadecimal counter
delay(dt)
}