# include <LiquidCrystal.h>  // no semicolon for library
# include <string.h>   // still doesn't work

int re = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

float firstNum;
float secNum;
float answer;

string op;   // bizarre string problem here

LiquidCrystal lcd(rs,en,d4,d5,d6,d7)  // this is how we connect it to the Arduino

void setup() {
lcd.begin(16,2);  //it has 16 columns and 2 rows
Serial.begin(9600);

}

void loop() {
lcd.setCursor(0,0);

//ask for first number
lcd.print("Input 1st Number");
//wait
while (Serial.available() == 0) {

}
//read
firstNum = Serial.parseFloat();
lcd.clear();

//for second number

lcd.setCursor(0, 0); // he cleared the first number so this is OK to do
//ask
lcd.print("Input 2nd Number");
//wait
while (Serial.available() == 0)
{
}
//read
secNum = Serial.parseFloat();

lcd.clear();
lcd.setCursor(0,0);
// ask
lcd.print("Input (+,-,*,/)")
// read
while (Serial.available() == 0)
{
}
op = Serial.readString();

if (op=="+"){
    answer=firstNum+secNum;
}

if (op == "-"){
    answer = firstNum - secNum;
}

if (op == "*"){
    answer = firstNum * secNum;
}

if (op == "/"){
    answer = firstNum/secNum;
}
lcd.clear();
lcd.setCursor(0,0);
lcd.print(firstNum);
lcd.print(op);
lcd.print(secNum);
lcd.print(" = ");
lcd.print(answer);
lcd.setCursor(0,1);
lcd.print("Thank you!");
delay(5000);
lcd.clear();
}