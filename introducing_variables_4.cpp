//variables are defined above the setup step

int redLED=8;
float Pi=3.14;
int dit=250; //short blips
int dah=700; //long blips
int longW=2000;
string myName="Steve";

void setup() {
pinMode(redLED,OUTPUT);
}

void loop() {
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED, LOW);
delay(dit);
digitalWrite(redLED, HIGH);
delay(dit);
digitalWrite(redLED, LOW);
delay(dit);
digitalWrite(redLED, HIGH);
delay(dit);
digitalWrite(redLED, LOW);
delay(dit);
delay(longW);


digitalWrite(redLED, HIGH);
delay(dah);
digitalWrite(redLED, LOW);
delay(dah);
digitalWrite(redLED, HIGH);
delay(dah);
digitalWrite(redLED, LOW);
delay(dah);
digitalWrite(redLED, HIGH);
delay(dah);
digitalWrite(redLED, LOW);
delay(dah);
delay(longW);

digitalWrite(redLED, HIGH);
delay(dit);
digitalWrite(redLED, LOW);
delay(dit);
digitalWrite(redLED, HIGH);
delay(dit);
digitalWrite(redLED, LOW);
delay(dit);
digitalWrite(redLED, HIGH);
delay(dit);
digitalWrite(redLED, LOW);
delay(dit);
delay(longW);
}

//note that it doesn't always have to be pin 13, but
// just remember that the pin # needs to be programmed in.