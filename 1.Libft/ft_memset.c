/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:53:38 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:35:31 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
		((unsigned char *)s)[i++] = c;
	return (s);
}
/* int main()
{
	char a[]="Memset";

	puts(memset(a,'!',4));
	puts(ft_memset(a,'!',4));
	return (0);
} */