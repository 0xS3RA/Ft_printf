/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:38:36 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/21 19:51:44 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	printhex(unsigned int n, int maj)
{
	char	hexsymbols[16];
	size_t	size;
	int		i;
	char	beginletter;

	i = 0;
	size = 0;
	if (maj)
		beginletter = 'A';
	else
		beginletter = 'a';
	while (i < 16)
	{
		if (i < 10)
			hexsymbols[i] = i + '0';
		else
			hexsymbols[i] = (i - 10) + beginletter;
		i++;
	}
	if (n >= 16)
		size += printhex(n / 16, maj);
	write(1, &hexsymbols[n % 16], 1);
	return (size + 1);
}
