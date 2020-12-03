// BareMinimum
// Every Arduino program has a 'void setup' and 'void loop'

void setup() {
    // parameters: which pin; input or output
pinMode(13, OUTPUT);
}

void loop() {
    // parameters: which pin; on or off
    digitalWrite(13, HIGH);
    delay(100);  // leaves it on for 100 milliseconds
    digitalWrite(13, LOW);
    delay(900); // delays it for 900 milliseconds
    // duty cycle is total 1000 milliseconds
}

// arrow in GUI to send command to the Arduino