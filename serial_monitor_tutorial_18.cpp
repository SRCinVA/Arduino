//reading numbers from the serial monitor

/*
int numBlinks //just initialize it
String msg="How many blinks do you want?";
int j;
int bt=500;
int redPin=12;
*/

float radius; //just initialize it; you'll get this as user input
String msg="What is the radius of your circle?";
float area //initialize it
String msg2="Your circle has an area of: ";
float pi=3.14;

void setup() {

Serial.begin(9600);
//pinMode(redPin,OUTPUT);

}

void loop() {
//Ask for user input
Serial.println(msg)
// create a while loop to introduce a pause:
while (Serial.available()==0) { // "while there is no data on the Serial port."

}

radius=Serial.parseFloat();
area=pi*radius*radius;
Serial.print(msg2);
Serial.println(area);
/*
numBlinks=Serial.parseint()  //once it sees data, it drops out of the while loop and gets the number. 
                            // seems(?) that Serial.parseint takes in user input.

for (j=1;j<=numBlinks;j=j+1){

digitalWrite(redPin,HIGH);
delay(bt);
digitalWrite(redPin,LOW);
delay(bt);
}
*/
}

// you need to ask, wait, then read.