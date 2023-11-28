/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:29:23 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:33:37 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)&((const unsigned char *)str)[i]);
		i++;
	}
	return (NULL);
}
/* int main()
{
	const char str[] = "Hello, world!";
	int search_char = 'l';

	char *result = ft_memchr(str, search_char,4);

	if (result)
		printf("Character '%c' found at position %ld and the string is %s \n",
			search_char, result - str, result);
	else
		printf("Character '%c' not found in the string.\n", search_char);

	return (0);
} */