#include "mbed.h"

AnalogIn ain(Analog_Input_Pin);
DigitalOut led(Output_Pin);

int main(){
  while(1){
    if(ain>0.3){
      led = 1;
    } else {
      led = 0;
    }
  }
}
