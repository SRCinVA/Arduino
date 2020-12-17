int readPin=A3;
float V2=0;
int delayTime=500;


void setup() {

    pinMode(readPin,INPUT);
    Serial.begin(9600)  // how you print to what you are measuring
}

void loop() {

    readVal=analogRead(readPin);
    V2 = (5./1023.)*readVal;  //you have to include the decimal, because a whole number int woudln't be right.
    Serial.println(V2); //in his IDE, there's a separate widget that shows the voltage.
    delay(delayTime);
}

// the readout is actually on a scale of 0 to 1023 (which is 2^10) 
// of whatever the original voltage is. That number is called "Read Value."

// Question: why don't we have to define readVal?