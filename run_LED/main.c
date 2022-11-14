#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

/* PWM Raspberry Pi 4 model B */
int LED1 = 26;
int LED2 = 23;

int main() {

  printf ("Start:\n");
    wiringPiSetup();	/* initialize wiringPi setup */

    pinMode(LED1,OUTPUT);	/* set GPIO as output */
    pinMode(LED2,OUTPUT);	/* set GPIO as output */
    
    while (1)
    {
      digitalWrite(LED1,HIGH);		/* write high on GPIO */ 
      digitalWrite(LED2,LOW);		/* write high on GPIO */ 
      delay(1000);

      digitalWrite(LED1,LOW);		/* write high on GPIO */ 
      digitalWrite(LED2,HIGH);		/* write high on GPIO */ 
      delay(1000);
    }
}