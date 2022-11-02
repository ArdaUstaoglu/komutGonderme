#include "ledShow.h"
Ledshow show;
void setup() {
  show.setup();
}

void loop() { 
  show.setAction("flipflop");
  show.show();
  show.setAction("disco");
  show.show();
}
