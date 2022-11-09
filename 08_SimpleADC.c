#include "mbed.h"
AnalogOut Aout(p18);      
AnalogIn Ain(p20)         

int main() {
  while(1) {
    Aout=Ain;     
  }
}
