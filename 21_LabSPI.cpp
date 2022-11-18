#include "mbed.h"

DigitalOut CS(D10);

SPI ser_port(D11,D12,D13);  //mosi, miso, sclk

char switch_word;

int main()
{
  ser_port.format(8,0); //8 bit data, 0 Mode
  
  ser_port.frequency(1000000); //clock frequency
  
  CS=1;
  
  while(1)
  {
    switch_word=0xAA; //set up word to be transmitted
   
    CS=0; //select chip
    
    ser_port.write(switch_word);  //send switch_word
    
    CS=1;
    
    thread_sleep_for(500);
    
    switch_word=0x55; //set up new word to be transmitted
    
    CS=0;
    
    ser_port.write(switch_word);
    
    CS=1;
    
    thread_sleep_for(500);
  }
}
    
    
    
  
  
