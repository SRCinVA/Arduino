int redPin=9;
int bright=255 // in analog, you can grade things between 0 and 256 (inclusive to 255)

void setup() {

pinMode(redPin,OUTPUT);

}

void loop () {

analogWrite(redPin,bright);
//you could introduce dealys and multiple inputs to see it change.
}