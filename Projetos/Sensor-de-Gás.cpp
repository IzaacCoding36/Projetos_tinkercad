//Código C++//

void setup()
{ pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);}

void loop()
{ if (analogRead(A0) > 600) {
    digitalWrite(3, HIGH);
    tone(2, 5274, 1000);
  } else {
    digitalWrite(3, LOW);
    noTone(2);
  }
  delay(10);
}