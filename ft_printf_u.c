/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:30:12 by suozkara          #+#    #+#             */
/*   Updated: 2025/01/01 14:56:31 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	a;
	int		ct;

	a = n;
	ct = 0;
	if (a < 0)
	{
		a *= -1;
		ct += ft_putchar('-');
	}
	if (a >= 10)
	{
		ct += ft_putnbr(a / 10);
	}
	ct += write(1, &"0123456789"[a % 10], 1);
	return (ct);
}

int	ft_putuns(unsigned int n)
{
	int	ct;

	ct = 0;
	if (n >= 10)
	{
		ct += ft_putuns(n / 10);
	}
	ct += write(1, &"0123456789"[n % 10], 1);
	return (ct);
}

int	ft_puthex(unsigned int n, char c)
{
	int	ct;

	ct = 0;
	if (n >= 16)
		ct += ft_puthex(n / 16, c);
	if (c == 'x')
		ct += ft_putchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ct += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (ct);
}

int	ft_putptr(unsigned long n, int f)
{
	int	ct;

	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ct = 0;
	if (f == 1)
		ct += ft_putstr("0x");
	if (n >= 16)
		ct += ft_putptr(n / 16, 0);
	ct += ft_putchar("0123456789abcdef"[n % 16]);
	return (ct);
}
