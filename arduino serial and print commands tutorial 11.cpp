// arduino serial and print commands
int j=1; 
int waitT=750;
string myString =" + ";
int x=3;
int y=7:
int z;

void setup()

{
Serial.begin(115200);
    // go with a Baud rate of 9600.
    // you only need to set this up once, so do it in the setup.

}

void loop()

{
z=x+y;
Serial.print(x);
Serial.print(myString);
Serial.print(y);
Serial.print(" = ");
Serial.println(z);  // print and then go to a new line.
delay(waitT);

}
