int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed; // between 0 and 255
            // runs at 100 but needs a push
int jPin=A1; // joystick
int jVal;

void setup() {
pinMode(speedPin,OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(jPin, INPUT);
Serial.begin(9600);
}

void loop() {

jVal=analogRead(jPin);

Serial.println(jVal);
//forward direction
if (jVal < 512) {
    mSpeed = -255./512.*jVal+255.;
    analogWrite(speedPin,mSpeed);
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
}

// backwards direction
if (jVal => 512) { // we'll give this one the 512
    mSpeed = 255. / 512. * jVal - 255.;
    analogWrite(speedPin, mSpeed);
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
}

}