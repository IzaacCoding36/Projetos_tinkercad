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
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);}

void loop()
{ distancia = 0.01723 * readUltrasonicDistance(7, 6);
  if (distancia < 100) {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    tone(10, 523, 1000);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    noTone(10);
  }
  delay(10);
}