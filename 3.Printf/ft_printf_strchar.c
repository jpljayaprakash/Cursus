/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:41:15 by jlakshma          #+#    #+#             */
/*   Updated: 2024/03/01 16:41:19 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_chr(char c, int *flags)
{
	int		i;

	i = 0;
	if (flags[3])
	{
		write(1, &c, 1);
		while (i < flags[7] - 1)
			i += write(1, " ", 1);
	}
	else
	{
		while (i < flags[7] - 1)
			i += write(1, " ", 1);
		write(1, &c, 1);
	}
	return (1 + i);
}

static int	str_left(char *s, int *flags)
{
	int	i;

	i = 0;
	ft_putstr_fd(s, 1);
	free (s);
	while (i < flags[7])
		i += write(1, " ", 1);
	return (i);
}

static int	str_right(char *s, int *flags)
{
	int	i;

	i = 0;
	while (i < flags[7])
		i += write(1, " ", 1);
	ft_putstr_fd(s, 1);
	free (s);
	return (i);
}

int	print_str(char *s, int *flags)
{
	int		len;

	if (flags[5] && flags[6] < 5 && !s)
		return (print_str("", flags));
	if (!s)
		return (print_str("(null)", flags));
	len = (int)ft_strlen(s);
	if (flags[5] && len > flags[6])
		len = flags[6];
	s = ft_substr(s, 0, len);
	flags[7] -= len;
	if (flags[3])
		return (len + str_left(s, flags));
	else
		return (len + str_right(s, flags));
}
