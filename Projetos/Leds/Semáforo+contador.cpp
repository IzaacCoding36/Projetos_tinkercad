//Código C++//

String modelo = "ânodo comum";

#define botao 2
#define LED_VERDE_CAR 0
#define LED_AMARELO_CAR 1
#define LED_VERMELHO_CAR 3
#define LED_VERDE_PED 4
#define LED_VERMELHO_PED 5

int modo = 0;

bool displaySeteSeg[10][7] = {
 { 1, 1, 1, 1, 0, 1, 1 }, //DIGITO 0
 { 1, 0, 0, 0, 0, 1, 0 }, //DIGITO 1
 { 0, 1, 1, 0, 1, 1, 1 }, //DIGITO 2
 { 1, 0, 1, 0, 1, 1, 1 }, //DIGITO 3
 { 1, 0, 0, 1, 1, 1, 0 }, //DIGITO 4
 { 1, 0, 1, 1, 1, 0, 1 }, //DIGITO 5
 { 1, 1, 1, 1, 1, 0, 1 }, //DIGITO 6
 { 1, 0, 0, 0, 0, 1, 1 }, //DIGITO 7
 { 1, 1, 1, 1, 1, 1, 1 }, //DIGITO 8
 { 1, 0, 1, 1, 1, 1, 1 } //DIGITO 9
};

void setup() {
 for (int i = 0; i <= 13; i++) {
 pinMode(i, OUTPUT);
 }
 pinMode(botao, INPUT);
 attachInterrupt(digitalPinToInterrupt(botao), botaoAcionado, CHANGE);
 if (modelo == "ânodo comum") {
 for (int i = 7; i <= 13; i++) {
 digitalWrite(i, HIGH);}
 }
}
void loop() {
 switch (modo) {
 case 0:
 carros();
 break;
 case 1:
 travessia();
 modo = 0;
 break;
 }
}

void botaoAcionado() {
 modo = 1;
}

void carros() {
 digitalWrite(0, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(3, LOW);
 if (modelo == "ânodo comum") {
 for (int i = 7; i <= 13; i++) {
 digitalWrite(i, HIGH);
 }
 } else {
 for (int i = 7; i <= 13; i++) {
 digitalWrite(i, LOW);}
 }
}

void travessia() {
 delay(1000);
 digitalWrite(0, LOW);
 digitalWrite(1, HIGH);
 delay(3000);
 digitalWrite(1, LOW);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 boolean led = HIGH;
 for (int contador = 9; contador >= 0; contador--) {
 ligaSegmentosDisplay(contador);
 if (contador <= 6) {
 digitalWrite(4, LOW);
 digitalWrite(5, led);
 led = !led;}
 }
}

void ligaSegmentosDisplay(int digito) {
 byte pino = 7;
 for (byte contadorSegmentos = 0; contadorSegmentos <= 6; ++contadorSegmentos) {
 if (modelo == "ânodo comum") {
 digitalWrite(pino, !displaySeteSeg[digito][contadorSegmentos]);
 } else {
 digitalWrite(pino, displaySeteSeg[digito][contadorSegmentos]);
 }
 pino++;
 }
 delay(1000);
}