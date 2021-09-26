#include <IRremote.h>  // need to import the library (from online).
int IRpin = 9;
IRrecv IR(IRpin);    //need to create the object and where it's connected to.
decode_results cmd;  // command from the library (not the Arduino), where it reads input from the module (the remote)
String myCom; 

int rPin = 6;
int gPin = 10;
int bPin = 5;  // some weird thing in the IRremote library messes with pin 11, we needed an alternative.

int rBright=255; // looks like maximum brightness for all.
int gBright=255;
int bBright=255;

float dFact = 1; // the "dimming factor": it's best to set this up as a float (perhaps make 0.1 into 10% brightness.)



void setup()
{
Serial.begin(9600)
IR.enableIRIn();     // strange capitalization ... 

pinMode (rPin,OUTPUT);
pinMode (gPin,OUTPUT);
pinMode (bPin,OUTPUT);

// just to check first if they're responsive; we'll replace 255 later.
// digitalWrite(rPin,255);
// digitalWrite(gPin,255);
// digitalWrite(bPin,255);

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

    // we're going to keep the existing functionality and add on more capabilities with the LEDs.
    if (myCom=="pwr"){
        rBright = 255;
        gBright = 255;
        bBright = 255;
        dFact = 1;
    }

    if (myCom=="fun"){  // this turns it off.
        rBright = 0;
        gBright = 0;
        bBright = 0;
        dFact = 0;
    }
    if (myCom=="zero"){  // this makes it white
        rBright = 255;
        gBright = 255;
        bBright = 255;
        // dFact = 0;  you don't want to mess with this when pressign the numbers,
        // so we won't be using this for the other numbers.
    }
    if (myCom=="one"){  // this makes it red
        rBright = 255;
        gBright = 0;
        bBright = 0;
    }
    if (myCom=="two"){  // green
        rBright = 0;
        gBright = 255;
        bBright = 0;
    }
    if (myCom=="three"){  // blue
        rBright = 0;
        gBright = 0;
        bBright = 255;
    }
    if (myCom=="four"){  // cyan
        rBright = 0;
        gBright = 255;
        bBright = 255;
    }
    if (myCom=="five"){  // magenta
        rBright = 255;
        gBright = 0;
        bBright = 150;
    }
    if (myCom=="six"){  // yellow
        rBright = 255;
        gBright = 255;
        bBright = 0;
    }
    
    // this is what actually makes it light up or turn off.
    analogWrite(rPin,rBright);
    analogWrite(gPin,gBright);
    analogWrite(gPin,bBright);
}