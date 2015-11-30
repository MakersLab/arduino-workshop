int led = 9;
int svitivost = 0;
int krok = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, svitivost); //pošli nulu na devět

  svitivost = svitivost + krok; //svitivost = 5;

  if (svitivost <= 0 || svitivost >= 255) {
    krok = -krok;
  }

  delay(30);
}

