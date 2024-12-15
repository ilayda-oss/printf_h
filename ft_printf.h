/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:22:58 by suozkara          #+#    #+#             */
/*   Updated: 2024/12/15 20:49:29 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putuns(unsigned int n);
int	ft_puthex(unsigned long n, char c);
int	ft_putptr(unsigned long n);
int	ft_printf(const char *s, ...);

#endif