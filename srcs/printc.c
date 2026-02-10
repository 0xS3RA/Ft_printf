
#include "libftprintf.h"

size_t	printc(char c)
{
	write(1, &c, 1);
	return (1);
}
