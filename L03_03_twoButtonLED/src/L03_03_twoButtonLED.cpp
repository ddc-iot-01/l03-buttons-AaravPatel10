/* 
 * Project L03_03_twoButtonLED
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
const int GREENLED = D6;
const int BUTTON = D3;
const int YELLOW = D2;
const int YELLOWLED = D5;
int inputvalue;
int inputValue2;

void setup() 
{
  Serial.begin  (9600);
  pinMode(GREENLED,OUTPUT);
  pinMode(BUTTON,INPUT);
  pinMode(YELLOWLED,OUTPUT);
  pinMode(YELLOW,INPUT);
}


void loop()
{
 inputvalue = digitalRead(BUTTON);
 inputValue2 = digitalRead(YELLOW);


  if(inputvalue == 1)
  {
    /*digitalWrite(inputvalue , HIGH);*/
    digitalWrite(GREENLED , HIGH);
    Serial.printf("buttonstate = high\n");
  } 
  else 
  { 
    digitalWrite(GREENLED , LOW);
    Serial.printf("buttonstate = low\n");
  }
   inputvalue = digitalRead(BUTTON);

 inputValue2 = digitalRead(YELLOW);


  if(inputValue2 == 1)
  {
    //*digitalWrite(inputvalue , HIGH);*/
    digitalWrite(YELLOWLED, HIGH);
    Serial.printf("buttonstate2 = high\n");
  } 
  else 
  { 
    digitalWrite(YELLOWLED , LOW);
    Serial.printf("buttonstate2 = low\n");
  }

}
