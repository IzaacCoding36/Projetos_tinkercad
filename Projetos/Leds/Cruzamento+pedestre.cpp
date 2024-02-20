//Código C++//

//Definições//

void setup()
{ pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);}

void loop()
{ digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  delay(500);}