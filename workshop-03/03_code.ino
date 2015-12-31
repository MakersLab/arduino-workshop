// dálková spoušť foťáku
#include <multiCameraIrControl.h>

Nikon D5000(9);

void setup() {
}

void loop() {
  D5000.shutterNow();
  delay(5000);
}