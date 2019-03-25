#include "mbed.h"

DigitalIn  mybutton (USER_BUTTON);
DigitalOut myled    (LED1);


int main()
{
  int counter;
  int count;
  count = 0;
  while( true ){
    if( !mybutton) {
      count   = count + 1;
      counter = 0;
      while( counter != count ){
        myled = 1;
        wait( 0.1 );
        myled = 0;
        wait( 0.1 );
        counter = counter + 1;
      }
    }// mybutton is closed.
    
  }
}

