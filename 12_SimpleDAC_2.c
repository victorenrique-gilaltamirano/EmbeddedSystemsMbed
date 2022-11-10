#include "mbed.h"
 
AnalogIn ain(p20);	
DigitalOut led(p5);
int main() {
    while (1){
        if(ain > 0.3) {
            led = 1;
        } else {
            led = 0;
        }
    }
}
