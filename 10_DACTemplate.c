#include "mbed.h"

AnalogOut signal(Analog_Output_Pin);

int main(){
  while(1){
    for(float i=0.0; 1<1.0; i+=0.1){
      signal=i;
      wait(0.0001);
    }
  }
}
