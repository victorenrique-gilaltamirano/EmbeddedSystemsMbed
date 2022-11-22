#include "mbed.h"

typedef struct{
  float voltage; //AD result from sensor
  float current; //AD result fro sensor
  uint32_t counter; //counter value
} message_t; //message_t structure with 3 variables

MemoryPool <message_t, 16> mpool;
Queue<message_t,16> queue;
Thread thread;

void send_thread(void)
{
  uint32_t i=0;
  while(true)
  {
    i++; //simulating data update as ADCreading
    
    message_t *message = pool.alloc();
    message->voltage = (i*0.1)*33;
    message->current = (i*0.1)*11;
    message->counter = i;
    queue.put(message); //put message at end of th queue
    ThisThread::sleep_for(1000);
  }
}

int main(void)
{
  thread.start(callback(send_thread));
  while(true)
  {
    osEvent evt = queue.get();
    if(ect.status == osEventMessage)
    {
      message_t *message = (message_t *)evt.value.p;
      printf("\n voltage: %.2f V \n\r",message->voltage);
      printf("\n current: %.2f A \n\r",message->current);
      printf("\n number of cycles: %u V \n\r",message->counter);
      mpool.free(message);
    ////
    }
  }
}
    
