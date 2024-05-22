#include <Simple5641AS.h>

int ledVermelho = 9;
int ledAmarelo = 6;
int ledVerde = 3;

int pedVerde = 2;
int pedVermelho = 11;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pedVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);

  
  delay(1000);
}

void loop() {  
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(pedVermelho, HIGH);
  delay(10000);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(pedVermelho, LOW);
  digitalWrite(pedVerde, HIGH);
  delay(3000);
  digitalWrite(pedVerde, LOW);
  digitalWrite(pedVermelho, HIGH);
  delay(1000); 

}

// void loop() {
//   digitalWrite(ledVerde, LOW);
//   digitalWrite(ledVermelho, HIGH);
//   delay(100);
//   digitalWrite(ledVermelho, LOW);
//   digitalWrite(ledAmarelo, HIGH);
//   delay(100);
//   digitalWrite(ledAmarelo, LOW);
//   digitalWrite(ledVerde, HIGH);
//   delay(100);
// }
