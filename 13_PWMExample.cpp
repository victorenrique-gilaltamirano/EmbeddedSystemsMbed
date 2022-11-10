#include "mbed.h"
PwmOut speaker(p21);
AnalogIn pot1(p15);
AnalogIn pot2(p16);
    float val1, val2, i;
int main(){
        while(1) {
        val1 = pot1.read();
        val2 = pot2.read(); 
        for(i=0; i<1; i+=0.05){
            speaker.period(0.003125-(0.002*val1));
            speaker = i*0.05*val2;
            wait_ms (100);
                 }
        }  
}
