#include <SoftwareSerial.h>
#define sensor A0
#define rele 7

int leitura = 0;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(rele, OUTPUT);
  digitalWrite(rele, LOW);
  Serial.begin(9600); // Monitoramento local
}

void loop() {
  leitura = analogRead(sensor);
  Serial.print("Umidade: ");
  Serial.println(leitura);

  if (leitura < 400) { // Umidade baixa
    digitalWrite(rele, HIGH); // Liga bomba
  } else {
    digitalWrite(rele, LOW); // Desliga bomba
  }

  delay(2000);
}
