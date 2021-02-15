int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=250;

//byte LEDs=0xFF; // indicating the number will be a hexadecimal
                // if it's 1111 1111 all LEDs should turn on

// you could also just type them in as binaries, and for altenating patterns:
byte myByte=0b00000001;

void setup() {
Serial.begin(9600);
pinMode(latchPin,OUTPUT); 
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LED1s);// we want to send the data out through Pin 12
                        // clockPin just connects the arduino and the shift register
                        // Least Significant Bit First ... ?!?!
digitalWrite(latchPin,HIGH);  // because we have sent the data
delay(dt);
digitalWrite(latchPin, LOW);
shiftOut(dataPin, clockPin, LSBFIRST, LED2s);                                      
digitalWrite(latchPin, HIGH);
Serial.println(myByte,BIN);
delay(dt);
myByte = myByte/128 + myByte*2; // shifts to the left and "recycles" it over to the other side
// myByte = myByte*128 + myByte/2; // shifts to the right, recycling it over the other side
}