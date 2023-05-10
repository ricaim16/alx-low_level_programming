#include "main.h"
/**
 * _put_recursion :is function like put();
 * @s: input 
 * return:0 success
 */
void _puts_recursion(char *s);
{
	if(*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('/n');
}
