int LEDState=0;
int LEDPin=8;
int buttonPIN=12;
int buttonNew;
int buttonOld=1; //initialize it to 1
int dt = 100;

void setup() {

Serial.begin(9600);
pinMode=(LEDPin, OUTPUT);
pinMode=(buttonPin, INPUT);

}

void loop() {
buttonNew=digitalRead(buttonPin);
if(buttonOld ==0 && buttonNew == 1)
    if (LEDState == 0){
        digitalWrite(LEDPin, HIGH);
    }
    LEDState = 1;

else{
    digitalWrite(LEDPin, LOW);
}
    LEDState=0;
}