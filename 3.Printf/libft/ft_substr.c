/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:09:18 by jlakshma          #+#    #+#             */
/*   Updated: 2023/11/28 14:16:26 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{

	int pos, len, c = 0;

	// Testcase1
	char string[14] = "geeksforgeeks";

	pos = 5;
	len = 5;
	printf("String: %s ", string);
	printf("\nsubstring is:%s", ft_substr(string,pos,len));

	// Testcase2
	char string2[5] = "abcde";
	pos = 0;
	len = 3;
	c = 0;
	printf("\nString: %s ", string2);
	printf("\nsubstring is:%s", ft_substr(string,pos,len));

	return (0);
} */
