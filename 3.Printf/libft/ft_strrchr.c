/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:51:36 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:36:53 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*oc;

	oc = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			oc = ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (oc);
}
/* int main()
{
	const char str[] = "Hello, world!";
	int search_char = 'l';

	char *result = ft_strchr(str, search_char);

	if (result)
		printf("Character '%c' found at position %ld and the string is %s \n",
			search_char, result - str, result);
	else
		printf("Character '%c' not found in the string.\n", search_char);

	return (0);
}  */