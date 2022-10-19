#include <msp430.h> 


/**
 * main.c
 */
int sum(int a, int b);
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	int a = 0b1000000000000000;
	int b = 0b1000000000000000;
	int c = sum(a, b);
	return 0;
}

int sum(int a, int b)
{
    return a + b;
}
