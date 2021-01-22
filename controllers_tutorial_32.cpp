// joysticks are far more precise controls than knobs.

int Xpin=A0;
int Ypin=A1;
int Spin=2; // it can also operated as an on/off switch.
int Xval;
int Yval;
int Sval;
int dt=200;

void setup(){

Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
digitalWrite(Spin, HIGH) // to power the switch function?

}


void loop(){

Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Sval=digitalRead(Spin);
delay(dt);
Serial.print("X Value = ");
Serial.print(Xval);
Serial.print(" Y Value = ");
Serial.print(Yval);
Serial.print(" Switch state is: ");
Serial.println(Sval);

}