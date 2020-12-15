int redPin=9;
int bright=255 // in analog, you can grade things between 0 and 256 (inclusive to 255)

void setup() {

pinMode(redPin,OUTPUT);

}

void loop () {

analogWrite(redPin,bright);
//you could introduce dealys and multiple inputs to see it change.
}

// on the oscilliscope, if you entered 127 brightness, 
// it would swing between 0 and 5 in a sine-wave function.
// to average out to 2.5 volts.
// This is called pulse-width modulation.
// Capacitors smooth over those stark swings pretty well.