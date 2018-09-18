#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

    //Global Variable.
    int incrementer;

    //Port Interrupt
    P3IE = 1;

    //Clear interrupt flag.
    P3IFG = 0;

    //Has button Interrupted?
    if(P3IFG == 1)
        //Increment.
        incrementer = incrementer + 1;
    //TODO display incremented value on the LCD
    //ELSE
        //Restore Working Registers.

    //Re-enable PORT interrupt Flag.
    P3IFG = 0;

    //Return
    return 0;
}
