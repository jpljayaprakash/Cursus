/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:16:54 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:56:47 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			w++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (w);
}

static char	*word_form(char *str, char c)
{
	int		len;
	int		i;
	char	*w;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	w = (char *)malloc(sizeof(char) * (len + 1));
	if (!w)
		return (NULL);
	i = 0;
	while (i < len)
	{
		w[i] = str[i];
		i++;
	}
	w[i] = 0;
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strings;
	int		i;

	if (!s)
		return (NULL);
	str = (char *)s;
	strings = (char **)malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			strings[i++] = word_form(str, c);
		while (*str && *str != c)
			str++;
	}
	strings[i] = 0;
	return (strings);
}
/*
int	main(void)
{
	char input[] = "This,is,a,test,string";
	char delimiter = ',';

	char **result = ft_split(input, delimiter);

	if (result == NULL)
	{
		printf("ft_split failed to allocate memory.\n");
		return (1);
	}
	for (int i = 0; result[i] != NULL; i++)
		printf("Token %d: %s\n", i, result[i]);
	for (int i = 0; result[i] != NULL; i++)
		free(result[i]);
	free(result);

	return (0);
} */
