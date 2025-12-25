/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:30:55 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/21 20:24:28 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
