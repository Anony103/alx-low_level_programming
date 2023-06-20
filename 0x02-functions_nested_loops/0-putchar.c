#include "main.h"
#include <unistd.h>
/**
* main - C program that uses puts statement for printing
* Return: 0 always
*/
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
