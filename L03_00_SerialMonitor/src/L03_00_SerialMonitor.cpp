/* 
 * Project L03_00_SerialMonitor
 * Author: Aarav Patel
 * Date: 6/12/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);
int j;


void setup() {
  // Put initialization like pinMode and begin functions here or serial print
  Serial.begin (9600);
  waitFor (Serial.isConnected,5000);
  delay(2000);
  Serial.printf("hello world\n");
  for( j = 1; j <= 13; j++){
    Serial.printf("%i ,",j);
  }
  Serial.printf("all done");
   
  }


void loop() {

}
