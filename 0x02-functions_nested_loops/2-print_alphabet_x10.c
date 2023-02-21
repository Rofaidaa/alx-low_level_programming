#include "main.h"
/**
* main - check the code.
*File: 2-print_alphabet_x10.c 
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);		
}
_putchar('\n');
i++;
}
}
