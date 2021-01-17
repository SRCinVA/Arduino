int LEDState=0;
int LEDPin=8;
int buttonPIN=12;
int buttonNew;
int buttonOld=1; //initialize it to 1, but why?
int dt = 100;

void setup() {

Serial.begin(9600);
pinMode=(LEDPin, OUTPUT);
pinMode=(buttonPin, INPUT);

}

void loop() {
buttonNew=digitalRead(buttonPin);
if(buttonOld == 0 && buttonNew == 1){
    if (LEDState == 0){
        digitalWrite(LEDPin, HIGH);
        LEDState = 1;
    }

    else{
        digitalWrite(LEDPin, LOW);
        LEDState = 0;
    }
}

// he doesn't explain this one well at all:
// whatever the value of buttonNew was, *now* goes into buttonOld
// that's what turns the cycle over.
// buttonOld initialized at 1
// buttonNew starts at 0 (maybe?), because there's nothing there.
// might be an implicit Boolean at work here:
//   - first: a digital read of "nothing"
//   - skips "if" statement
//   - oldButton set to "0"
//   - first button press, making newButton into 1
//   - with oldButton==0 and newButton==1, you can get into loop




buttonOld=buttonNew;
delay(dt);

// Note: this might be the painful, long way of doing it:
/*
else:
    if (LEDState == 1){
        digitalWrite(LEDPin, LOW);
        LEDState = 0;
    }

    else{
        digitalWrite(LEDPin, HIGH);
        LEDState = 1;
    }

*/
}