/* 
 * Project L03_04_AnalogInput
 * Author: Aarav Patel
 * Date: 6/15/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


SYSTEM_THREAD(ENABLED);
const int analogpin = A0;
int val = 0;
float volts;

// Functins Declarations
float intoVolts(int bits);


void setup() {
 pinMode(analogpin,INPUT);
}


void loop() {
  
  val = analogRead(analogpin);
   volts = intoVolts(val);
  Serial.printf("%irisistor\nVoltage value = %0.1f", val,volts);
   delay(1000);
}

// Convert bits to volts
float intoVolts(int bits){
 float result;

result = (3.3/4095.0)*bits;
return result;

}