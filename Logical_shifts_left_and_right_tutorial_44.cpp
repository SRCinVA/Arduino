int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=1000;

//byte LEDs=0xFF; // indicating the number will be a hexadecimal
                // if it's 1111 1111 all LEDs should turn on

// you could also just type them in as binaries, and for altenating patterns:
byte myByte=0b01010101;
// if it had been 0b10000000, you would have just seen it shuffle to the left one space at a time.
// you could have done exactly this in hexadecimals, as well.

void setup() {
Serial.begin(9600);
pinMode(latchPin,OUTPUT); 
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByte);
digitalWrite(latchPin,HIGH);  // because we have sent the data
Serial.println(myByte,BIN);
delay(dt);
myByte = myByte/2; // every other one is off, and the pattern "shuffles" to the right
myByte = myByte*2; // here, they shuffle to the left.
}
