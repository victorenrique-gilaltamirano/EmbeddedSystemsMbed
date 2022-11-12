#include "mbed.h"

PwmOut led(Output Pin);

int main()
{
  while(1)
  {
    for(float p=0.0; p<1.0; p+= 0.1f)
    {
      led = p;
      wait(0.1);
    }
  }
}
