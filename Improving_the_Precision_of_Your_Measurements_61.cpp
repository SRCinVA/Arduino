//remember: this is to create the LCD object in the program:
# include <LiquidCrystal.h>
int re = 7;
int en = 8;
int dh = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int buttonPin = A0;
int buttonVal; // we're going to read from this one, so you don't assign a starting value

int numMeas=100; // average a bunch of measurements to improve the precision.
                // if it's too fast, then increase the number of measurements (50 to 100)
float avMeas; // if it's an int, we have a large rounding problem.
int j; // we might need a counter for a For Loop.
float bucket=0; // to the numbers to as they come in. Initialize it to 0; otherwise it throws an eror.
                // if measurement is a float, then bucket needs to be as well.
LiquidCrystal lcd(rs,en,d4,d5,dg,d7)

int trigPin = 2;
int echoPin = 3;
float pingTravelTime; // we'll be reading this one
float  pingTravelDistance;
float distanceToTarget;
int dt (5000);

void setup() {
lcd.begin(16,2): //the dimensions of the lcd
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
Serial.begin(9600);
}

void loop() { // we need to go LOW -> HIGH -> LOW for a clear signal
lcd.setCursor(0,0);  // to create the prompt for the LCD
lcd.print("Place the target");
lcd.setCursor(0,1) // need to reset it to another line
lcd.print("Press to Measure");
// now we need to see the status of the button
buttonVal=digitalRead(buttonPin);
//complcated: if this reads as a "1", then just sit in that status. We do this with a While Loop:
while (buttonVal==1);{
    // here, we need to keep checking the button's status:
    buttonVal=digitalRead(buttonPin)
}
// this will just churn away until you get a "0". When it's "0", then makes the measurement:

lcd.setCursor(0,0);
lcd.print("Measuring ...");

for (j=1; j<=numMeas; j=j+1){  //here's the For Loop to capture the values.

digitalWrite(trigPin,LOW); // start LOW
delayMicroseconds(10);
digitalWrite(trigPin, HIGH); // stay HIGH until ...
delayMicroseconds(10);
digitalWrite(trigPin, LOW); // ... the ping comes back, then goes LOW again
pingTravelTime=pulseIn(echoPin, HIGH); // this measures the length of the HIGH pulse (for assessing distance?)
                    // we're looking for a HIGH pulse from the echo pin.
                    // we'd no longer need an oscilloscope
delay(25);
pingTravelDistance = (pingTravelTime * 765. * 5280 * 12.)/(3600. * 1000000);
distanceToTarget = pingTravelDistance/2;
// we need to add the bucket to this For Loop
bucket=bucket+distanceToTarget;  // each subsequent distanceToTarget is added.
}

// make sure this is out of the loop; you don't divide bucket every time the loop spins--you just do that once.

avMeas=bucket/numMeas;
Serial.print ("Average Distance to the Target is: ");
Serial.print(avMeas);
Serial.println(" inches");
// you can still print to the serial monitor, but below is for the LCD
// it's better to clear it out here, so that the delay doesn't interrupt
// like it did at the very bottom of this loop. The clear happens after the measurement is made.

lcd.clear();
lcd.setCursor(0,0); // to get rid of the second line
lcd.clear();
lcd.print("Average Target Distance");
lcd.setCursor(0,1); // need it to be column 0, row 1 to go to the next line.
lcd.print(average);
lcd.print(" inches")
delay(dt);

}