// Código C++ //

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

void setup()
{ pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(1, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  led_display1.begin(112);}

void loop()
{ led_display1.writeDisplay();
  led_display1.println("");
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  if (digitalRead(1) < 1) {
    digitalWrite(2, LOW);
    delay(500);
    digitalWrite(3, HIGH);
    delay(3000);
    digitalWrite(3, LOW);
    delay(500);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    led_display1.writeDisplay();
    led_display1.println("----");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("---1");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("---2");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("---3");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("---4");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("---5");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("----");
    delay(1000);
    led_display1.writeDisplay();
    led_display1.println("----");
    delay(500);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(500);
    digitalWrite(2, HIGH);
    delay(500);}
}