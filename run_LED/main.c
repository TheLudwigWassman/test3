#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

/* PWM Raspberry Pi 4 model B */
int enA = 26; //BCM 12 || Physical 32
int in1 = 4; //BCM 23 || Physical 16
int in2 = 5; //BCM 24 || Physical 18

int main() {

  printf ("Start:\n");
    wiringPiSetup();	/* initialize wiringPi setup */

    pinMode(enA,PWM_OUTPUT);	/*set GPIO as output */
    pinMode(in1,OUTPUT);
    pinMode(in2,OUTPUT);
    
    while (1)
    {

      //Forward in1 high and in2 low 
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      for (size_t i = 0; i < 1023; i++)
      {
        pwmWrite(enA, i);
       // analogWrite(enA, i);
        delay(5);
      }
      

    }
}