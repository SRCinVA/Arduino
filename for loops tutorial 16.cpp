int j; // j is better than i because those characters can be easy to confuse.
int delayTime = 500;

void setup() {

Serial.begin(9600);

}

void loop() {
/*
for (j = 10; j >= 1; j = j - 1); {
    Serial.println(j);
    delay(delayTime);
    }
*/
for (j = 1; j <= 10; j = j + 1)
    ;
{
    Serial.println(j);
    delay(delayTime);
}

Serial.println(); //just to create a blank space after the for loop.

}
