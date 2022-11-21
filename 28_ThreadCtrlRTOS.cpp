//one thread controls another

#include "mbed.h"

Thread thread2; //name of thread

DigitalOut led1(LED1);
volatile bool running = true;

//thread toogles led each second
void blink(DigitalOut *led1)
{
  while(running)
  {
    *led1 = !*led1;
    ThisThread::sleep_for(1000);
  }
}

//spawns a thread to run blink for 5 seconds
int main()
{
  thread2.start(callback(blink,&led1)); //start exectuing thread2
  ThisThread::sleep_for(10000); //this sets how long thread will be able to run
  running = false;
  thread.join(); //wait for thread2 to terminate
}
  
