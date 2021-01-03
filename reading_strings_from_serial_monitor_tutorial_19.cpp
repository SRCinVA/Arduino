// reading strings from serial monitor
String myName;
String msg = "What is your name?";
String msg2 = "Hello  ";
String msg3 = "Welcome to Arduino!";

void setup() {

Serial.begin(9600);

}

void loop() {
//ask
Serial.println(msg);

//wait
while (Serial.available()==0){
//notice that you do nothing here.
}
//read
myName=Serial.readString();
// it seems .readString takes in an input and
// puts it into myName.
Serial.print(msg2);
Serial.print(myName);
Serial.print(msg3);

}