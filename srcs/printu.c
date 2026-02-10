
#include "libftprintf.h"

size_t	printu(unsigned int i)
{
	size_t	size;
	char	c;

	if (i >= 10)
		size = printu(i / 10);
	else
		size = 0;
	c = (i % 10) + '0';
	write(1, &c, 1);
	return (size + 1);
}
