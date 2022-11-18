// default: 9600bps, 8 data bits, No parity check, 1 stop bit

#include "mbed.h"

Serial async_port(p9,p10); // TX and RX pins 9 and 10

DigitalOut red_led(p25); //red led pin 25
DigitalOut green_led(p26); //green led pin 26

DigitalIn switch_ip1(p5);
DigitalIn switch_ip2(p6);

char switch_word; //the word to send
char recd_val; //received value

int main()
{
  async_port.baud(19200); //set baud rate //the rest is as default
  
  while(1)
  {
    switch_word = 0xa0; //define data to send
    
    if(switch_ip1==1)
      switch_word = switch_word|0x01; //LSB
    if(switch_ip2==1)
      switch_word = switch_word|0x02; //next LSB
    
    async_port.putc(switch_word);
    
    if(async_port.readable() == 1)) //if there is a char to be read
      recd_val = async_port.getc(); //if yes then read it
    
    //continue program
    // ...
  }
}
  
