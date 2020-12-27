int yellowPin=6;
int redPin=9;
int yellowTime=500;
int redTime;
int yellowBlink=3;
int redBlink=5;
int j;

void setup() {

pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
for(j=1;j<=yellowBlink;j=j+1)
    {
    digitalWrite(yellowPin, HIGH);
    delay(yellowTime);
    digitalWrite(yellowPin, LOW);
    delay(yellowTime);
    }

for (j = 1; j <= redBlink; j = j + 1)
    {
    digitalWrite(redPin, HIGH);
    delay(redTime);
    digitalWrite(redPin, LOW);
    delay(redTime);
    }
}