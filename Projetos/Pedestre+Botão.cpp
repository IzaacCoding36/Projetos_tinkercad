//Código C++//

void setup()
{ pinMode(0, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);}

void loop()
{ digitalWrite(0, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  if (digitalRead(0) < 1) {
    digitalWrite(8, LOW);
    delay(500);
    digitalWrite(9, HIGH);
    delay(3000);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(500);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    delay(5000);
    digitalWrite(7, LOW);
    delay(500);
    digitalWrite(6, HIGH);
    delay(3000);
    digitalWrite(10, LOW);
    delay(500);}
}
