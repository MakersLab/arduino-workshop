int tlacitko = 8;
int led = 13;
boolean posledniStav = LOW;
boolean stavTlacitka = LOW;
boolean ledOn = false;

void setup() {
  pinMode(tlacitko, INPUT);
  pinMode(led, OUTPUT);
}

boolean debounce(boolean posledni) {
  boolean stav = digitalRead(tlacitko);

  if (posledni != stav) {
    delay(5);
    stav = digitalRead(tlacitko);
  }
  
  return stav;
}

void loop() {
  stavTlacitka = debounce(posledniStav);

  if (posledniStav == LOW && stavTlacitka == HIGH) {
    ledOn = !ledOn;
  }
  posledniStav = stavTlacitka;

  digitalWrite(led, ledOn);

}
