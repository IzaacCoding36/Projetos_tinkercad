//Código C++//

void setup()
{ pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);}

void loop()
{ digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  delay(500);}
