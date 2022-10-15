#include <stdio.h>

/**
*main- prints a random number and states if it is poositive, negative or zero.
*
*Return: always 0 (success)
*/
int main(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
