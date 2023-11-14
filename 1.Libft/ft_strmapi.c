/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:50:55 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:54:57 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = -1;
	while (str[++i])
		str[i] = f(i, str[i]);
	return (str);
}
/*
static char	custom_function(unsigned int index, char c)
{
	if (index % 2 != 0 && c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

int	main(void)
{
	const char	*input;
	char		*result;

	input = "Hello, World!";
	result = ft_strmapi(input, custom_function);
	if (result == NULL)
	{
		printf("ft_strmapi failed to allocate memory.\n");
		return (1);
	}
	printf("Original string: %s\n", input);
	printf("Modified string: %s\n", result);
	free(result);
	return (0);
}
 */