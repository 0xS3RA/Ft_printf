/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:19:26 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/21 20:48:36 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	switchformat(va_list parametersinfos, char const format)
{
	if (format == 'c')
		return (printc((char)va_arg(parametersinfos, int)));
	if (format == 's')
		return (prints(va_arg(parametersinfos, const char *)));
	if (format == 'p')
		return (printhexaddress(va_arg(parametersinfos, void *)));
	if (format == 'd' || format == 'i')
		return (printi(va_arg(parametersinfos, int)));
	if (format == 'u')
		return (printu(va_arg(parametersinfos, unsigned int)));
	if (format == 'x')
		return (printhex(va_arg(parametersinfos, unsigned int), 0));
	if (format == 'X')
		return (printhex(va_arg(parametersinfos, unsigned int), 1));
	if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list		parametersinfos;
	size_t		writtencharacters;
	char		currentchar;

	writtencharacters = 0;
	va_start(parametersinfos, format);
	while (*format)
	{
		currentchar = *format;
		format++;
		if (currentchar != '%')
		{
			write(1, &currentchar, 1);
			writtencharacters++;
			continue ;
		}
		writtencharacters += switchformat(parametersinfos, *format);
		format++;
	}
	va_end(parametersinfos);
	return (writtencharacters);
}
