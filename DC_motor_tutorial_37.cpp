
int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=100; //between 0 and 255
                // it will run at 100,
                // but you need to give
                // it a push



void setup() {
pinMode(speedPin,OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite (speedPin,255); // to give it a kickstart
delay(100);
analogWrite(speedPin,mSpeed); // with the kick, it will sustain at 100
delay(5000);
/* to make it go counterclockwise:

digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(speedPin, mSpeed);

*/
}