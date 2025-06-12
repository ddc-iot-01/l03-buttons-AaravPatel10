/* 
 * Project L03_03_buttonLED
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
const int GREENLED = D6;
const int BUTTON = D3;
int inputvalue ;

void setup() {
  Serial.begin  (9600);
pinMode(GREENLED,OUTPUT);
pinMode(BUTTON,INPUT);

}


void loop() {
inputvalue = digitalRead(BUTTON);


if(inputvalue == 1){
digitalWrite(inputvalue , HIGH);
Serial.printf("buttonstate = high\n");
}else { 
digitalWrite(GREENLED , LOW);
Serial.printf("buttonstate = low\n");
}
}
