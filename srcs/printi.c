
#include "libftprintf.h"

size_t	printi(int n)
{
	long	nbr;
	char	c;
	size_t	size;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11), 11);
	size = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
		size++;
	}
	if (nbr >= 10)
		size += printi(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
	return (size + 1);
}
