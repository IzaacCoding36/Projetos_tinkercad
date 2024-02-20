/* Programa: Código Morse */

int buzzer = 2;
int botao = 3;
int LED = 4;

void setup()
{ pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(botao, INPUT_PULLUP);}

void loop()
{if (digitalRead(botao) == LOW) {
    digitalWrite(LED, HIGH);
    tone(buzzer, 1000);}
  else {digitalWrite(LED, LOW);
        noTone(buzzer);}
}