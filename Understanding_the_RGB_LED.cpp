// Understanding the RGB LED

int redPin=8;
int greenPin=9;
int  bluePin=10;
String myColor;
String msg="Which color would you like?";

void setup() {

Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}


void loop() {
//ask
Serial.println(msg);
//wait
while (Serial.available() == 0){ // to just keep it hanging out

}
//read
myColor = Serial.readString(); // to populate the empty variable we declared above

if (myColor=="red"){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
}

if (myColor == "green"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
}

if (myColor == "blue"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
}

if (myColor == "off"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
}

if (myColor == "aqua"){
    digitalWrite(redPin, LOW);
    analogWrite(greenPin, 255); //use a number between 0 and 255
    analogWrite(bluePin, 125);
}

}