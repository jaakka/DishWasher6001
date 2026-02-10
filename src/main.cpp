#include "CPURegisters.h"

void initPins(void);

int main(void) {
  
  initPins();

  while(1) 
  {
    PORTD = (1 << PORTD7);
    //PORTD = (1 << PORTD6);
  }
}

void initPins(void) 
{
  DDRB = (1 << DDB1) | (1 << DDB5); // D8, D13 output
  DDRC = 0b00000000; // A5-A0 all input
  DDRD = (1 << DDD4) | (1 << DDD5) | (1 << DDD6) | (1 << DDD7); // D4, D5, D6, D7 output
}

// #include <Arduino.h>

// // put function declarations here:
// int myFunction(int, int);

// void setup() {
//   // put your setup code here, to run once:
//   int result = myFunction(2, 3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }

/*

DDRB → D8–D13
DDRC → A0–A5
DDRD → D0–D7

*/