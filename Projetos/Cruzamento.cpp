//Código C++//

void setup()
{ pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);}

void loop()
{ digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  delay(500);}