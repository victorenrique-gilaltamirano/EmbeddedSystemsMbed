#include "mbed.h"
DigitalOut led1(LED1);
DigitalOut led2(D8);  
 
Thread thread2;
void led1_thread(){
    while (true) {
        led1 = !led1;
        thread_sleep_for(1100);
    }
}
int main(){
    thread2.start(led1_thread);
    while (true) {
        led2 = !led2;
        thread_sleep_for(500);
    }
}
