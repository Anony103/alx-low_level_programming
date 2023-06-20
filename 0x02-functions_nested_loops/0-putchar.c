#include "main.h"
#include <unistd.h>
/**
* main - C program that uses puts statement for printing
* Return: 0 always
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
