//Código C++//

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

void setup()
{ pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);}

void loop()
{ distancia = 0.01723 * readUltrasonicDistance(7, 6);
  if (distancia < 50) {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
  delay(10);
}