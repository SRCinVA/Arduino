int latchPin=11;
int clockPin=9;
int dataPin=12;

byte LEDs=0xFF; // indicating the number will be a hexadecimal
                // it's 1111 1111
                // all LEDs should turn on
void setup() {

Serial.begin(9600);
pinMode(latchPin,OUTPUT); 
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}


void loop() {
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LEDs)// we want to send the data out through Pin 12
                        // clockPin just connects the arduino and the shift register
                        // Least Significant Bit First ... ?!?!
digitalWrite(latchPin,HIGH)  // because we have sent the data
}