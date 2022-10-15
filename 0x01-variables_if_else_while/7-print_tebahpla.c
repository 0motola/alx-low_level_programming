#include <stdio.h>

/**
*main- prints a random number and states if it is poositive, negative or zero.
*
*Return: always 0 (success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
