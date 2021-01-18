int buttonPin1=12;
int buttonPin2=11;
int LEDPin=3;

int buttonVal1;
int buttonVal2;
int LEDbright=0;

int dt=250;

void setup(){

pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(LEDPin,OUTPUT);
Serial.begin(9600);
}

void loop() {

buttonVal1 = digitalRead(buttonPin1);
buttonVal2 = digitalRead(buttonPin2);
Serial.print("Button 1 = ");
Serial.print(buttonVal1);
Serial.print(", ");
Serial.print("Button 2 = ");
Serial.println(buttonVal2);
delay(dt;);

if (buttonVal1 == 0) {   // if the button is down, it will increase the brightness.
    LEDbright=LEDbright+5;
}
if (buttonVal2 == 0) {
    LEDbright=LEDbright-5;
}
if (LEDbright>255) { // so you don't exceed 255
    LEDbright=255;
}
if (LEDbright < 0){ // so you don't exceed 0
    LEDbright = 0;
}

analogWrite(LEDbright);

}

// important for the last lesson: the "off" position automatically produces a 
// read-out of "0" and "1" for "on.""
// This is the huge missing piece from yesterday.