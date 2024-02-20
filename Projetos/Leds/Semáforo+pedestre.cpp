//Código C++//

//Definições//

void setup()
{ pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);}

void loop()
{ digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  delay(500);}