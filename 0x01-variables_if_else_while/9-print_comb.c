#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet
*
* Return:0  (sucess)
*/
int main(void)
{
int c;

for (c = '0'; c <= '9'; ++c)
{
if (c != '0')
{
putchar(',');
putchar(' ');
}
putchar(c);
}

putchar('\n');
return (0);
}
