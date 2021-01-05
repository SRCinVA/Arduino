// reading strings from Serial Monitor

int redPin=12;   //it seems just declaring an int is the connection point into the Arduino
int greenPin=11;
int bluePin=10;
String myColor;
String msg = "What color LED?"

void setup() {

Serial.begin(9600)
pinMode(redPin, OUTPUT); //if you don't do these, the lights are *very* dim.
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}


void loop() {

Serial println(msg);
while (Serial.available()==0){ // while nothing's been input

}

myColor=Serial.readString(); // how you make your input.

if (myColor == "red" || myColor == "Red"){
    digitalWrite(redPin, HIGH); 
    digitalWrite(greenPin, LOW); // need to turn the others off
    digitalWrite(bluePin, LOW);
}

if (myColor == "green" || myColor == "Green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH); // need to turn the others off
    digitalWrite(bluePin, LOW);
}

if (myColor = "blue" || myColor == "Blue"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW); // need to turn the others off
    digitalWrite(bluePin, HIGH);
}

}