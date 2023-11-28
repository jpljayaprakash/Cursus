/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:26:37 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 12:54:48 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && (i + j) < n)
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	*empty;
	char	*result;

	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	empty = (char *)"";
	// const char *haystack = "This is a sample text for testing strnstr fsample";
	// const char *needle = "sample";
	// size_t n = 18;
	result = ft_strnstr(empty, "", -1);
	if (result != NULL)
	{
		printf("Substring found: %s\n", result);
	}
	else
	{
		printf("Substring not found.\n");
	}
	return (0);
} */
