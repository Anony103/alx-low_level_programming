#include <stdio.h>
/**
* main - C program that uses puts statement for printing
* Return: 0 always
*/
int main(void)
{
	char word[8]="_putchar";
	for(int i=0;i<8;i++)
	{
		putchar(word[i]);
	}
	putchar("\n");
	return (0);
}
