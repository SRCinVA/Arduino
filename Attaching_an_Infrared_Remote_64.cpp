#include <IRremote.h>  // need to import the library (from online).
int IRpin = 9;
IRrecv IR(IRpin);    //need to create the object and where it's connected to.
decode_results cmd;  // command from the library (not the Arduino), where it reads input from the module (the remote)
String myCom; 
void setup()
{
Serial.begin(9600)
IR.enableIRIn();     // strange capitalization ... 
}

void loop() {  // "we sit and wait for data"
    while (IR.decode(&cmd) == 0){  // the ampersand gets the value and sends it to cmd (which is a variable created above)
      // while it is empty ("0"), it will just turn over in an empty loop.
    }
    // after someone presses a button:
    Serial.println(cmd.value, HEX); // we told it that the value returned would be cmd, in the form of a hexidecimal.
    delay(1500); // need to give it a delay so that it doesn't go to fast
    IR.resume(); // this restarts the reading
    //Serial.println(cmd.value, HEX); // to show you the hex that cmd produces, but you don't need this
    
    if cmd.value == "0xFF6897" { //or whatever hex value the remote produces ("0x" says that a hex is coming)
        myCom = "zero";
        Serial.println(myCom);
    }

    if cmd.value == "0xFFA825D" { //or whatever hex value the remote produces ("0x" says that a hex is coming)
        myCom = "pwr";
        Serial.println(myCom);
    }






}