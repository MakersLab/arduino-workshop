int hodnota;
int pin = A0;
int napeti;

void setup() {
  // začátek komunikace rychlostí 9600 bit/s
  Serial.begin(9600);
}

void loop() {
  hodnota = analogRead(pin);

  // napeti = hodnota * 5 / 1023;
  napeti = map(hodnota, 0, 1023, 0, 5);
  
  Serial.print("Napeti = ");
  Serial.print(napeti);
  Serial.println("V");
}
