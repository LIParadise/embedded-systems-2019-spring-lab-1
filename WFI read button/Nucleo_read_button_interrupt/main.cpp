#include "mbed.h"
 
InterruptIn mybutton(USER_BUTTON);
DigitalOut myled(LED1);
 
float delay = 1.0; // 1 sec
 
void pressed()
{
    myled = !myled;
}
 
int main()
{
    mybutton.rise(&pressed);
    mybutton.fall(&pressed);
    while(1){
        __wfi();
        }
}
