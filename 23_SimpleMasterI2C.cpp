#include "mbed.h"

I2C i2c_port(p9,p10);

char switch_word;      //data to send
char recd_val;  //value received from Target

const int addr=0x52; //i2c device address

int main()
{
  while(1)
  {
    switch_word=0xaa;
    
    i2c_port.start(); //start i2c
    i2c_port.write(addr); //send device address
    i2c_port.write(switch_word); //send data
    i2c_port.stop();
    
    // ...
  }
}
