/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:08:09 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:51:47 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*s;
	long	n;
	int		i;

	n = nbr;
	i = nbr_len(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (n == 0)
		s[0] = '0';
	else if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		s[--i] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
/*
int	main(void)
{
	int number = 12345;

	char *result = ft_itoa(number);

	if (result == NULL)
	{
		printf("ft_itoa failed to allocate memory.\n");
		return (1);
	}

	printf("Integer: %d\n", number);
	printf("String: %s\n", result);

	free(result);

	return (0);
} */