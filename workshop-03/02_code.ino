// Pole
int ledPiny[] = {8, 10, 13};
int pocetPinu = 3;

void setup() {
  for (int pin = 0; pin < pocetPinu; pin++) {
    pinMode(ledPiny[pin], OUTPUT);
  }
}

void loop() {
  for (int pin = 0; pin < pocetPinu; pin++) {
    digitalWrite(ledPiny[pin], HIGH);
    delay(150);
    digitalWrite(ledPiny[pin], LOW);
  }

  for (int pin = pocetPinu - 1; pin >= 0; pin--) {
    digitalWrite(ledPiny[pin], HIGH);
    delay(150);
    digitalWrite(ledPiny[pin], LOW);
  }
}