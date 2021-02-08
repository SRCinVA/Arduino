byte myByte=0X00;
int dt=1500;


void setup() {
Serial.begin(9600)
}


void loop() {
Serial.print(myByte, DEC); // can also print out in BIN and HEX
Serial.println("   ");
Serial.print(myByte, BIN);
Serial.println("   ");
Serial.print(myByte, HEX);

myByte=myByte+1; // this makes a hexadecimal counter
delay(dt)
}