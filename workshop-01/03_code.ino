int led = 9;
int tlacitko = 2;

int stavTlacitka = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(tlacitko, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  stavTlacitka = digitalRead(tlacitko);

  if (stavTlacitka == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}

