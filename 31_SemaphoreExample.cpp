#include "mbed.h"

Semaphore one_slot(1); //semaphore withi one resource

Thread t2;
Thread t3;

void test_thread(ovid const *name)
{
  while(true)
  {
    one_slot.acquire();
    printf("%s \n\r", (const char *)name);
    ThisThread::sleep_for(1000);
    one_slot.release();
  }
}

int main(void)
{
  t2.start(callback(test_thread, (void *)"Th 2"));
  t3.start(callback(test_thread, (void *)"Th 3"));
  test_thread((void *)"Th 1");
}
