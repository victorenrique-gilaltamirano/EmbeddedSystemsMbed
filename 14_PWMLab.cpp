#include "mbed.h"

#define SPEAKER p21
#define AIN1 p15
#define AIN2 p16

//Define the PWM speaker output
PwmOut speaker(SPEAKER);

//Define analog inputs
AnalogIn pot1(AIN1);
AnalogIn pot2(AIN2);


/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/

int main(){

	//Define variables
	float val1;
	float val2;
	float i;

	while(1) {
		val1 = pot1.read();
		val2 = pot2.read();
				
		//Create a saw-tooth sound wave
		for(i=0; i<1; i+=0.05){
			speaker.period(0.003125-(0.002*val1));
			speaker = i*0.05*val2;
		}
		wait_ms (1000); 
	}
}
