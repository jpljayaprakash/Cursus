/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:34:56 by jlakshma          #+#    #+#             */
/*   Updated: 2023/11/28 14:15:09 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rtn;

	rtn = (char *)malloc(ft_strlen(s) + 1);
	if (!rtn)
		return (NULL);
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