#include <SSHAIO.h>;

void setup() {
  
  Serial.begin(1200);
  SSHAIO::SDBegin();
  SSHAIO::loadText();
  
}

void loop() {

  SSHAIO::inputSystem();

}
