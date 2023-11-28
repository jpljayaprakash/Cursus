/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:08:07 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 19:54:02 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i + ft_strlen(&src[j]));
}
/*
int	main(void) {
	char destination[30] = "Hello, ";
	const char source[] = "AAAAAAAA";
	size_t dstsize = 0;
	size_t result;

	printf("Before ft_strlcat:\n");
	printf("Destination: %s\n", destination);
	printf("Source: %s\n", source);
	result = ft_strlcat(destination, source, dstsize);
	printf("\nAfter ft_strlcat:\n");
	printf("Resulting Destination: %s\n", destination);
	printf("Total Length: %zu\n", result);

	return (0);
} */
