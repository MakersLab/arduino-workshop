// Cyklus do while
int led = 11;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int i = 0;
  do {
    analogWrite(led, i);
    delay(10);
    i++;
  }
  while (i < 255);
}