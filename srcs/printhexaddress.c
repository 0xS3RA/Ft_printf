/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:44:19 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/21 21:37:15 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	printhex_ulong(unsigned long n)
{
	char	hexsymbols[16];
	size_t	size;
	int		i;

	i = 0;
	size = 0;
	while (i < 16)
	{
		if (i < 10)
			hexsymbols[i] = i + '0';
		else
			hexsymbols[i] = (i - 10) + 'a';
		i++;
	}
	if (n >= 16)
		size += printhex_ulong(n / 16);
	write(1, &hexsymbols[n % 16], 1);
	return (size + 1);
}

size_t	printhexaddress(void *p)
{
	unsigned long	addr;
	size_t			returnsize;

	if (!p)
		return (prints("(nil)"));
	addr = (unsigned long)p;
	returnsize = 0;
	write(1, "0x", 2);
	returnsize += 2;
	returnsize += printhex_ulong(addr);
	return (returnsize);
}
