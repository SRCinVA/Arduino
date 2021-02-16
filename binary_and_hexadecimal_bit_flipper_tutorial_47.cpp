int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=1000;

//byte LEDs=0xFF; // indicating the number will be a hexadecimal
                // if it's 1111 1111 all LEDs should turn on

// you could also just type them in as binaries, and for altenating patterns:
byte myByte=0x01;
byte myByteFlipped; // we'll declare it but not specify it, because 
                    // we're going to subtract it from 255.

void setup() {
Serial.begin(9600);
pinMode(latchPin,OUTPUT); 
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByteFlipped);// we want to write the flipped byte
digitalWrite(latchPin,HIGH); 
delay(dt);

myByteFlipped=255-myByte;

}