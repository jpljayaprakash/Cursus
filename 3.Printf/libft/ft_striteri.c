/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:29:29 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:36:13 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
/*
void	custom_function(unsigned int index, char *c)
{
	if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c -32;
}

int	main(void)
{
	char input[] = "Hello, World!";

	ft_striteri(input, custom_function);

	printf("Modified string: %s\n", input);

	return (0);
} */