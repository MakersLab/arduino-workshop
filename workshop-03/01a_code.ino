// Cyklus for
int led = 11;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(led, i);
    delay(10);
  }
}