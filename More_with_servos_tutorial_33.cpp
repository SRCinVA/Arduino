// joysticks are far more precise controls than knobs.
#include <Servo.h> //need to import the library
Servo Xservo;
Servo Yservo;

int Xpin=A0;
int Ypin=A1;
int Spin=2; // it can also operated as an on/off switch.
int XSpin=9;
int YSpin=10;
int buzzPin=7;
int WVx;
int WVy;
int Xval; // to read off of
int Yval; // to read off of
int Sval;
int dt=200;

void setup(){

Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
pinMode(XSpin,OUTPUT);
pinMode(YSpin,OUTPUT);

Xservo.attach(XSpin);
Yservo.attach(YSpin);

digitalWrite(Spin, HIGH); // to power the switch function?

}

void loop(){

Xval = analogRead(Xpin);
WVx = (180./1023.) * Xval;
Yval = analogRead(Ypin); 
WVy = (180./1023.) * Yval;

Sval=digitalRead(Spin);
// now that you've calculated those values, you can give
// those instructions to the servo.

Xservo.write(WVx);
Yservo.write(WVy);
if (Sval==0){
    digitalWrite(buzzPin,HIGH);
}
else {
    digitalWrite(buzzPin,LOW);
}

delay(dt);
Serial.print("X Value = ");
Serial.print(Xval);
Serial.print("Y Value = ");
Serial.print(Yval);
Serial.print("Switch state is: ");
Serial.println(Sval);

}