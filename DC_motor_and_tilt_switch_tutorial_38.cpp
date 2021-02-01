
int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=100; //between 0 and 255
                // it will run at 100,
                // but you need to give
                // it a push
int tiltPin=2;
int tiltVal;

void setup() {
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(tiltPin, INPUT);
digitalWrite(tiltPin, HIGH); //to turn tiltPin into a pullup resistor
Serial.begin(9600);
}

void loop() {
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedPin,mSpeed); // with the kick, it will sustain at 100
/* to make it go counterclockwise:
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(speedPin, mSpeed);
*/

tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal) //to makes sure it's actually reading the tilt switch

if (tiltVal==0){  //meaning, if you are in the upright position
analogWrite(speedPin, mSpeed); // with the kick, it will sustain at 100
// in other words, you just keep going as is.
}

if (tiltVal == 1) {
analogWrite(speedPin,0) // this turns the fan off
// you also could have said digitalWrite(LOW), as well.
}

}