#include <stdio.h>

void myConstructor(void) __attribute__ ((constructor));
/**
 * myConstructor - prints before main function.
 */
void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
