/* 
 * Project L03_01_button
 * Author: Aarav Patel
 * Date: 6/12/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


SYSTEM_THREAD(ENABLED);
const int BUTTONPIN = D3;
int inputValue;

void setup() {
  // Put initialization like pinMode and begin functions here
  Serial.begin(9600);
  pinMode(BUTTONPIN ,INPUT);
 
  
 
}


void loop() {

 inputValue = digitalRead(BUTTONPIN);

  Serial.printf("buttonstate = %i\n", inputValue);


}
