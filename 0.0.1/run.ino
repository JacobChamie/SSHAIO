#include <SSHAIO.h>;

void setup() {

Serial.begin(1200);
SSHAIO::loadText();
}
void loop() {

SSHAIO::inputSystem();
}
