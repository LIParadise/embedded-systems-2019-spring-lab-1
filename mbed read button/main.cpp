#include "mbed.h"

DigitalIn  mybutton (USER_BUTTON);
DigitalOut myled    (LED1);


int main()
{
  while( true ){ 
    myled = !mybutton;
    }
}

