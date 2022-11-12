#include "mbed.h"

Ticker flipper;
DigitalOut led1(Output pin 1);
DigitalOUt led2(Output pin 2);

void flip()
{
  led2=!led2;
}

int main()
{
  led2 = 1;
  
  //tell the name of function (address) and how often to call it
  flipper.attach(&flip,2.0);
  
  //main loop
  while(1)
  {
    led1 = !led1;
    wait(0.2);
  }
}
