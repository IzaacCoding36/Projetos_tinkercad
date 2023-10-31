//Código C++//

#include <LiquidCrystal.h>
LiquidCrystal lcd_1(0, 1, 2, 3, 4, 5);

void setup()
{lcd_1.begin(16, 2);}

void loop()
{ lcd_1.scrollDisplayLeft();
  lcd_1.setCursor(16, 1);
  lcd_1.print("Programming is cool 0101");
  delay(100);}