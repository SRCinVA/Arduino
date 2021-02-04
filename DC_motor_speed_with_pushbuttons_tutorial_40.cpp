
int speedPin=5;
int dir1=4;
int dir2=3;
int BP1=8; // button pin 8
int BP2=9; // button pin 9
int B1Val;
int B2Val;
int mSpeed=0; //between 0 and 255
                // it will run at 100 but needs a push
int dt=500; // to make a reading every half second


void setup() {
pinMode(speedPin,OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(BP1, INPUT);
pinMOde(BP2, INPUT);

// going to use the internal resistor for both of these:
digitalWrite(BP1, HIGH);
digitalWrite(BP2, HIGH);

Serial.begin(9600);
}

void loop() {

B1Val = digitalRead(BP1); // shouldn't be analog
B2Val = digitalRead(BP2);
Serial.print("Button 1 "); // to check it's coming through
Serial.print(B1Val);
Serial.print(" Button 2 ");
Serial.println(B2Val);

if (B1Val == 0)
{                     // remember: "0" here means "unpressed"
    mSpeed=mSpeed-10; //if you press the decrement button, speed goes down by 10.
    delay(dt);
}

if (B2Val==0){       // remember: "0" here means "unpressed"
    mSpeed=mSpeed+10; // if you press the increment button
    delay(dt);
}

if (mSpeed>255){
    mSpeed=255;      // to rein it back to 255, if an increment pushed it over.
}

if (mSpeed<-255){
    mSpeed=-255;
}

if (mSpeed==10){ // we know it won't work there, so we need to bump it up to 100 automatically.
    mSpeed=100;
}

if (mSpeed == -10){ // we know it won't work there, so we need to bump it up to 100 automatically.
    mSpeed = -100;
}

if (mSpeed == 90 || mSpeed == 95){
    mSpeed = 0;
}

if (mSpeed == -90 || mSpeed == -95){
    mSpeed = 0;
}

digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedPin,mSpeed); // with the kick, it will sustain at 100


/* to make it go counterclockwise:
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(speedPin, mSpeed);
*/
}