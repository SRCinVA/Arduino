#include <IRremote.h>  // need to import the library (from online).
int IRpin = 9;
IRrecv IR(IRpin);    //need to create the object and where it's connected to.
decode_results cmd;  // command from the library (not the Arduino), where it reads input from the module (the remote)

void setup()
{
Serial.begin(9600)
IR.enableIRIn();     // strange capitalization 
}

void loop() {
    while (IR.decode(&cmd)==0){

    }
    Serial.println(cmd.value, HEX);
    delay(1500);
    IR.resume();
}