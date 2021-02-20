# include <LiquidCrystal.h>  // no semicolon for library
int re = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7)  // this is how we connect it to the Arduino


void setup() {
lcd.begin(16,2);  //it has 16 columns and 2 rows

}

void loop() {
lcd.setCursor(0,0);
lcd.println("Hello World");
lcd.setCursor(0,1); // this moves it down to the second line
lcd.print("What's your name?");
delay(1000); // hard-coded ...?!?!?
lcd.clear() // if you don't, the entire field won't clear away

/*


*/


}