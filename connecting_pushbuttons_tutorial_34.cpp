int buttonPin=2;
int buttonValue; // this is what we'll read
int dt=100;

void setup() {
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH); // it's unusual to write to an INPUT pin.
//it takes advantage of the internal pullup resistor in the Arduino,
// so that you don't have to connect one yourself.
Serial.begin(9600);
}

void loop() {

buttonValue=digitalRead(buttonPin);
Serial.print("Your button is: ");
Serial.println(buttonValue);
delay(dt);

}