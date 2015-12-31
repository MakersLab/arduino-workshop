int stepper = 13;
int cas = 1; // zpoždění mezi kroky
int krok = 1; // 1/x kroku

void setup() {
  pinMode(stepper, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  delay(2000);

  int otacka = krok * 200;

  for (int i = 0; i <= otacka; i++) {
    digitalWrite(stepper, HIGH);
    delay(cas);
    digitalWrite(stepper, LOW);
    delay(cas);
  }
}