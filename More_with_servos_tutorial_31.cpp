#include <Servo.h>

int lightVal;
int lightPin=9;
int dt = 250;
int angle;
Servo myServo // this creates the servo object
int servoPin = ;

void setup(){
Serial.begin(9600);
pinMode(lightPin, INPUT);
pinMode(servoPin, OUTPUT);
myServo.attach(servoPin);

}

void loop() {
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
angle=(-16./63.) * lightVal+16.*780./63.;
myServo.write(angle);

}