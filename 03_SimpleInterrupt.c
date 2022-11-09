#include "mbed.h"
InterruptIn trigger(p5);     
DigitalOut fire(p6);
DigitalOut disp(p7);

void pulse_out() {                 
  wait(0.02);
  fire = 1; 
  wait(0.001);
  fire = 0; 
}
int main() {
  trigger.rise(&pulse_out);  
  while(1) {                
    disp = !disp;
    wait(0.5);
  }
}
