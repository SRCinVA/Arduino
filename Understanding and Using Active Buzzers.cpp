// Understanding and Using Active Buzzers

int myNum;
int buzzPin = 8;
String msg="Please input your number";
int dt = 1000;

void setup() {

Serial.begin(9600);
pinMode(buzzPin, OUTPUT);

}


void loop() {

Serial.println(msg);
while (Serial.available) == 0 {

}
myNum = Serial.parseInt();
if (myNum > 10) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
}

}