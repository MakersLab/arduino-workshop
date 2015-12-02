int pinOut = 8;
int pinIn = A0;
int vyska = 0;
int svetlo = 0;

void setup() {
  pinMode(pinOut, OUTPUT);
  pinMode(pinIn, INPUT);
}

void loop() {
  svetlo = analogRead(pinIn);
  vyska = map(svetlo, 0, 1023, 100, 8000);
  tone(pinOut, vyska);
}
