// changing tone of an active buzzer
int buzzPin = 8;
int dt1 = 1; //these are in milliseconds
int dt2 = 2;
int j;

void setup() {
pinMode(buzzPin, OUTPUT);

}

void loop() {

for (j = 1; j <= 100; j = j + 1)
{
    digitalWrite(buzzPin, HIGH);
    delay(dt1);
    digitalWrite(buzzPin, LOW);
    delay(dt1);
}

for (j = 1; j <= 100; j = j + 1)
{
    digitalWrite(buzzPin, HIGH);
    delay(dt2);
    digitalWrite(buzzPin, LOW);
    delay(dt2);
}
}

