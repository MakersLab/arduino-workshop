// Cyklus while
int led = 11;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int i = 0;
  while (i < 255)
  {
    analogWrite(led, i);
    delay(10);
    i++;
  }
}