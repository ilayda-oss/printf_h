/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:23:29 by suozkara          #+#    #+#             */
/*   Updated: 2025/01/01 14:55:38 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checks(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	checkar(char c, va_list a)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'c')
		return (ft_putchar(va_arg(a, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(a, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(a, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(a, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(a, unsigned int), c));
	else if (c == 'p')
		return (ft_putptr(va_arg(a, unsigned long), 1));
	else
		return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		size;
	va_list	a;

	size = 0;
	i = 0;
	va_start(a, s);
	while (s[i])
	{
		if (s[i] == '%' && checks(s[i + 1]))
		{
			size += checkar(s[i + 1], a);
			i++;
		}
		else
			size += ft_putchar(s[i]);
		i++;
	}
	va_end(a);
	return(size);
}
