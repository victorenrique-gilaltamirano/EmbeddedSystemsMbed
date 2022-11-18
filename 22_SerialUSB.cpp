// send message to PC terminal using Nucleo board USB

#include "mbed.h"

BufferedSerial pc(USBTX,USBRX,9600);

in cycle=0;

int main()
{
  while(true)
  {
    printf("Hello world , this is loop %i \n\r",cycle);
    thread_sleep_ms(500);
    cycle++;
  }
}
