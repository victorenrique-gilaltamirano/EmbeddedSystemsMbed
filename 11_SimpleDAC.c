#include "mbed.h" 
AnalogOut signal(p18); 
int main() { 
    while(1) { 
        for(float i=0.0; i<1.0; i+=0.1) { 
            signal = i; 
            wait(0.0001); 
        } 
    } 
}
