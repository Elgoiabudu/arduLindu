#include <Simple5641AS.h>

int ledVermelho = 9;
int ledAmarelo = 6;
int ledVerde = 3;

void setup() {
  // pinMode(ledVermelho, OUTPUT);
  // pinMode(ledAmarelo, OUTPUT);
  // pinMode(ledVerde, OUTPUT);

  // segmentPins[] = { a, b, c, d, e, f, g, dot };
  const uint8_t segmentPins[] = { 4, 6, 3, 10, 9, 2, 5, 13 };
  // digitSelectionPins[] = { D1, D2, D3, D4 };
  const uint8_t digitSelectionPins[] = { 12, 11, 8, 7 };
  Simple5641AS component( segmentPins, digitSelectionPins );
  Serial.println("countDown() + zeroAnimation() example");
  component.countDown(5);
  component.zeroAnimation();
  delay(1000);
}

// void loop() {
//   digitalWrite(ledVermelho, LOW);
//   digitalWrite(ledVerde, HIGH);
//   delay(5000);
//   digitalWrite(ledVerde, LOW);
//   digitalWrite(ledAmarelo, HIGH);
//   delay(3000);
//   digitalWrite(ledAmarelo, LOW);
//   digitalWrite(ledVermelho, HIGH);
//   delay(5000);

// }

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
