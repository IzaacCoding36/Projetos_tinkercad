// Código C++ //

void setup()
{ pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);}

void loop()
{ analogWrite(11, 200);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(5000);
  analogWrite(11, 0);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(5000);
  analogWrite(11, 200);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(5000);
  analogWrite(11, 0);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(5000);}