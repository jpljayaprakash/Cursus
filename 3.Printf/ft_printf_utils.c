/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:41:35 by jlakshma          #+#    #+#             */
/*   Updated: 2024/03/01 16:41:37 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(long long n, int base)
{
	int	len;

	len = !n;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoap(long long n)
{
	char		*c;
	bool		sign;
	long long	len;

	sign = n < 0;
	len = ft_numlen(n, 10);
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	c[len] = '\0';
	if (sign)
	{
		c[--len] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (len--)
	{
		c[len] = n % 10 + '0';
		n = n / 10;
	}
	return (c);
}
