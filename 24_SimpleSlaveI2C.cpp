#include "mbed.h"

I2CSlave slave(p9,p10);

char switch_word; //word to send

char recd_val; //value received from Master

int main()
{
  slave.address(0x52); //define slave's address
  
  while(1)
  {
    
    swith_word = 0xa0; //set up word to send
    
    slave.write(switch_word); //load word ready to send
    
    int i = slave.receive();  //bool hen there is a request from master
    if(i==3)
    {
      recv_val = slave.read();
      
      //...
    }
  }
}
