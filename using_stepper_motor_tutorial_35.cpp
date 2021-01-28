#include<Stepper.h> 

int stepsPerRevolution=2048; //this will make it a full revolution.
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
// creates the stepper with the connector pins in use.
int motSpeed=10; //this is a relatively high speed
int dt=500;

int buttonPin=2;
int motDir=1; // going clockwise; this will serve as a flag
int buttonValNew;  // the present state of the button
int buttonValOld=1; //means "not pressed" to kickstart it without errors

void setup() {
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
}

void loop(){
myStepper.step(stepsPerRevolution/2); //this will go .5 revolutions
delay(dt);
myStpper.step(-stepsPerRevolution/2); //note the negative 
delay(dt);

buttonValNew=digitalRead(buttonPin); //fresh new read of where the button is.
if (buttonValOld==1 && buttonValNew==0) { // meaning, the button was not pressed
                                            // this captures the change of state
                                            // between on and off.
                                            // you only chnage direction if it was up
                                            // at the last read and down now.
    motDir=motDir*(-1);  // to make it reverse (counterclockwise) direction
                        // remember -1 * -1 reverses the reversal (clever trick)
}

myStepper.step(motDir*1);  // his reasoning for this line is not clear
buttonValOld=buttonValNew; // at the button of the loop,
                            // the new value is "stale" 
                            // and cycles out into the "old".
                            // Then it goes back to the top of the loop
                            // for a "new" value.
}

// if you held the button down, it wouldn't change direction,
// because it's not finding that 1-->0 transition.