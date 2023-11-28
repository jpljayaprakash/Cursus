/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:42:05 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/19 16:42:05 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/* int main()
{
    char str1[6] = "hello";
    char str2[] = "jp";
    int a[] = {1,2,3,4,5};

    puts (memcpy(str1, str2, 2));
    puts(ft_memcpy(str1, str2, 2));
    printf("%d\n",sizeof(str2));
    printf("%d\n",sizeof(a));
    return 0;
} */
