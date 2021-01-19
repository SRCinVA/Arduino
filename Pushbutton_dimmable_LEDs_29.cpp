int buttonPin1=12;
int buttonPin2=11;
int LEDPin=3;
int buzzPin=2;

int buttonVal1;
int buttonVal2;
int LEDbright=0;

int dt=500;

void setup(){

pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(LEDPin,OUTPUT);
pinMode(buzzPin, OUTPUT);
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
delay(dt);

if (buttonVal1 == 0) {   // if the button is down, it will increase the brightness.
    LEDbright=LEDbright+5; // it seems he can just hold it or repeatedly click it to brighten it.
}

if (buttonVal2 == 0) {
    LEDbright=LEDbright-5;
}

Serial.println(LEDbright);

if (LEDbright>255) { // so you don't exceed 255
    LEDbright=255;
    digitalWrite(buzzPin, HIGH); // if you turn it on ...
    delay(dt);
    digitalWrite(buzzPin, LOW); //... you'll need to turn it off.
    Serial.println("Buzz HIGH"); // to test if you're in the if statements
}

if (LEDbright < 0){ // so you don't exceed 0
    LEDbright = 0;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
    Serial.println("Buzz LOW"); // to test if you're in the if statements
}

analogWrite(LEDPin, LEDbright); // not sure what this is doing here ...
                                // *might* be just to turn the LED on in analog (smoothly).
}

// important for the last lesson: the "off" position automatically produces a 
// read-out of "0" and "1" for "on.""
// This is the huge missing piece from 1/17 lesson.