/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:14:21 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/22 20:04:56 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(char const *s, ...);
size_t	printi(int i);
size_t	prints(const char *str);
size_t	printc(char c);
size_t	printu(unsigned int i);
size_t	printhex(unsigned int i, int maj);
size_t	printhexaddress(void *p);

#endif
