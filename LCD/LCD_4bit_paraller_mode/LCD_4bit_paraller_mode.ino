//include library code
#include <LiquidCrystal.h>

//initialize the library numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  //set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  //print a message to the LCD
  lcd.print("hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  //set the cursor to column 0, line 1
  lcd.setCursor(0, 1); 
  lcd.print(millis()/1000);
}
