/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:26:16 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:36:04 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/* int main()
{
	const char str[] = "Hello, world!";
	int search_char = 'w';

	char *result = ft_strchr(str, search_char);

	if (result)
		printf("Character '%c' found at position %ld and the string is %s \n",
			search_char, result - str, result);
	else
		printf("Character '%c' not found in the string.\n", search_char);

	return (0);
} */