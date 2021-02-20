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
lcd.print("Watch me count");
lcd.setCursor(0,1); // this moves the coming string down to the second line

/*
lcd.print("What's your name?");
delay(1000); // hard-coded ...?!?!?
lcd.clear() // if you don't, the entire field won't clear away
*/

for(int j=1; j<=10; j=j+1){
    lcd.setCursor(0,1); //this resets the cursor, so that the digits present one at a time
    lcd.print(j);
    delay(500);
    //lcd.clear(); if you keep clear() in the for loop, it clears out "Watch me count" right after "1" presents.
    // With clear() in the for loop, the "Watch me count" accidentally gets swept up in that first clear() execution.
    // The rest of the number displays and clears happen as expected.

}
lcd.clear() // Sitting out here, "Watch me count" displays, then all the numbers, then everything completely refreshes

}