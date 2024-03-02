/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:15:42 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:36:45 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/* int main() {
	const char *str1 = "Hello, world!";
	const char *str2 = "Hellp";
	size_t n = 5;

	int result = ft_strncmp(str1, str2, n);
	int result1 = strncmp(str1, str2, n);
	printf("org:%d , new: %d\n", result1, result);

	if (result < 0) {
		printf("str1 is less than str2\n");
	} else if (result > 0) {
		printf("str1 is greater than str2\n");
	} else {
		printf("str1 is equal to str2\n");
	}

	return (0);
} */