/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:34:56 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:50:36 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rtn;

	rtn = (char *)malloc(ft_strlen(s) + 1);
	if (!rtn)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(rtn, s, (ft_strlen(s) + 1));
	return (rtn);
}
/*int main()
{
	char source[] = "GeeksForGeeks";
	char* target = ft_strdup(source);

	printf("%s", target);
	return (0);
} */