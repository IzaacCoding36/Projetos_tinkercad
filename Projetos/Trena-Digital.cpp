//Código C++//

#include <LiquidCrystal.h>

int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{ pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);}

LiquidCrystal lcd_1(0, 1, 5, 4, 3, 2);

void setup()
{ lcd_1.begin(16, 2);}

void loop()
{ distancia = 0.01723 * readUltrasonicDistance(11, 10);
  lcd_1.clear();
  lcd_1.setCursor(3, 4);
  lcd_1.print("cm");
  lcd_1.setCursor(0, 1);
  lcd_1.print(distancia);
  delay(10);}
