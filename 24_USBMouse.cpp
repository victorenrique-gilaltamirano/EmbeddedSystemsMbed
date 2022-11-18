#include "mbed.h"
#include "USBMouse.h"
USBMouse mouse;

int dx[]={40,0,-40,0};
int dy[]={0,40,0,-40};

int main()
{
  while(1)
  {
    for(int i=0; i<4; i++)
    {
      mouse.move(dx[i],dy[i]);
      wait(0.2);
    }
  }
}
          
