#include <IRremote.h>  // need to import the library (from online).
int IRpin = 9;
IRrecv IR(IRpin);    //need to create the object and where it's connected to.
decode_results cmd;  // command from the library (not the Arduino), where it reads input from the module (the remote)
String myCom; 
int speedPin = 5; //links into the Arduino at 5 and how we control the motor speed
int dir1 = 4;
int dir2 = 3;
int mSpeed = 255; // this is maximum speed


void setup()
{
Serial.begin(9600)
IR.enableIRIn();     // strange capitalization ... 

//need to add pinModes for the various engine variables

pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);

// set an initial direction for the motor
digitalWrite(dir1,HIGH)
digitalWrite(dir2,LOW)

}

void loop() {  // "we sit and wait for data"
    while (IR.decode(&cmd) == 0){  // the ampersand gets the value and sends it to cmd (which is a variable created above)
      // while it is empty ("0"), it will just turn over in an empty loop.
    }
    // after someone presses a button:
    //Serial.println(cmd.value, HEX); // we told it that the value returned would be cmd, in the form of a hexidecimal.
    // we don't actually need this, so later in the lesson, he took it away.
    delay(1500); // need to give it a delay so that it doesn't go to fast
    IR.resume(); // this restarts the reading
    //Serial.println(cmd.value, HEX); // to show you the hex that cmd produces, but you don't need this
    
    if (cmd.value == 0xFF6897) { //or whatever hex value the remote produces ("0x" says that a hex is coming)
        myCom = "zero";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF30CF) { 
        myCom = "one";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF18E7) { 
        myCom = "two";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF7A85) {
        myCom = "three";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF10EF) {
        myCom = "four";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF38C7) {
        myCom = "five";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF5AA5) {
        myCom = "six";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF42BD) {
        myCom = "seven";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF4AB5) {
        myCom = "eight";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF52AD) {
        myCom = "nine";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF629D) {
        myCom = "v+";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFFE21D) {
        myCom = "fun";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF22DD) {
        myCom = "rew";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF02FD) {
        myCom = "play";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFFC23D) {
        myCom = "ff";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFFE01F) {
        myCom = "dn";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFFA857) {
        myCom = "v-";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF906F) {
        myCom = "up";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFF9867) {
        myCom = "eq";
        Serial.println(myCom);
    }

    if (cmd.value == 0xFFB04F) {
        myCom = "st";
        Serial.println(myCom);
    }

    // in principle, the four commands below should turn it on, off, forwards and backwards.
    if (myCom == "pwr"){
        digitalWrite(dir1,LOW); // one HIGH and one LOW, just to make sure the motor works
        digitalWrite(dir2,HIGH);
        analogWrite(speedPin,255) // 255 is full speed
        // the fan *should* operate as soon as it gets any signal from the remote.
        // this is the basic idea of "check as you go"--make sure you know what's going on before things get complicated
    }
    
    if (myCom == "fun"){ // it seems like this just turns it off.
        digitalWrite(dir1,LOW); // one HIGH and one LOW, just to make sure the motor works
        digitalWrite(dir2,HIGH);
        analogWrite(speedPin,0)
    }
    
    if (myCom == "ff"){
        digitalWrite(dir1, LOW);
        digitalWrite(dir2, HIGH);
        analogWrite(speedPin,mSpeed);
    }

    if (myCom == "ff"){
        digitalWrite(dir1, HIGH);
        digitalWrite(dir2, LOW);
        analogWrite(speedPin,mSpeed);
    }


}