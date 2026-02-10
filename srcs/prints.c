
#include "libftprintf.h"

size_t	prints(const char *str)
{
	size_t	writtencharacters;

	if (!str)
		return (prints("(null)"));
	writtencharacters = 0;
	while (*str)
	{
		write(1, str++, 1);
		writtencharacters++;
	}
	return (writtencharacters);
}
