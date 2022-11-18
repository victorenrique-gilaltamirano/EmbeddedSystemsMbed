#include "mbed.h"

SPI spi(PinSPI_COTI, PinSPIT_CITO, PinSPI_SCLK);

DigitalOut cs(PinSPI_CS);

int main()
{
  cs = 1; //start with target DESELECTED
  
  //setup SPI for 8 bit, high steady state clock
  //second edge capture, and 1MHz clock rate
  spi.format(8,3);
  spi.frequency(1000000);
  
  cs = 0; // SELECT the target
  
  spi.write(0x8F); //send 0x8F address data
  
  //store the answer of the Target, in register whoami 0x00
  printf("WHOAMI regsiter  = 0x%X\n", whoami);
  
  cs = 1; //DESELECT device
}
