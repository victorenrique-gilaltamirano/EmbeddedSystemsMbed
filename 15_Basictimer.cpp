#include "mbed.h"

Timer t;

int main()
{
  t.start();
  printf("Hello world \n");
  t.stop();
  printf("The time taken for salute was %f seconds! \n", t.read());
}
