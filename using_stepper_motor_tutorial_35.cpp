#include<Stepper.h> 

int stepsPerRevolution=2048;
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
// creates the stepper with the connector pins in use.
int motSpeed=10; //this is a relatively high speed
int dt=500;


void setup() {
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
}


void loop(){
myStepper.step(stepsPerRevolution);
delay(dt);
myStpper.step(-stepsPerRevolution); //note the negative 
delay(dt);
}