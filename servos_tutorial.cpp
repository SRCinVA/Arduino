#include<Servo.h> // an external library

int servoPin=9;
int servoPos=90; // 0 degrees to start, shifted it to 90 later.
Servo myServo// craeating a virtual object so you can interact with it

void setup() {

Serial.begin(9600);
myServo.attach(servoPin); //now we need to connect the Servo to the Arduino

}

void loop() {

Serial.println("What angle for the servo?")
while (Serial.available==0) {
// just to keep things hanging, so that it waits for input
}
servoPos=Serial.parseInt(); // read user input.
myServo.write(servoPos); // actually executes the user input

}