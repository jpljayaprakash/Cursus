/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:59:45 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:46:40 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/* int main() {
	const char *str1 = "Hello, world!";
	const char *str2 = "Hello";
	size_t n = 5;

	int result = ft_memcmp(str1, str2, n);
	int result1 = memcmp(str1, str2, n);
	printf("org:%d , new: %d\n", result1, result);
	return (0);
} */