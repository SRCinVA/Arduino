
int speedPin=5;
int dir1=4;
int dir2=3;
int BP1=8; // button pin 8
int BP2=9; // button pin 9
int B1Val;
int B2Val;
int mSpeed=100; //between 0 and 255
                // it will run at 100 but needs a push


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

digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedPin,mSpeed); // with the kick, it will sustain at 100


/* to make it go counterclockwise:
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(speedPin, mSpeed);
*/
}