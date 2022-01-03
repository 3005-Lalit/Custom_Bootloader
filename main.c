#include "Board_LED.h"
#include <stdint.h>
void delay (void);

void delay (void)
{
	unsigned int i=0;
	for( i=0 ; i < 50000 ;i++ );
}


int main (void)
{

			LED_Initialize();	
		while(1)
			{
		
				LED_On (0);
				LED_On (1);
			
			//	for( i=0 ; i < 500000 ;i++ );
				delay();
				LED_Off (0);
		  	LED_Off (1);
			
			//	for( i=0 ; i < 500000 ;i++ );
				delay();
	    }
	
	return 0;
			
}

