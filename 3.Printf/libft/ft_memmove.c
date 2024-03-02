/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:04:48 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 19:34:53 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
/*
int main () {
   char dest1[] = "memmove can be very useful.....s";
   char dest2[] = "memmove can be very useful.....s";
   char dest3[] = "oldstring";
   char dest4[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s\n", dest1);
   memcpy(dest1+20, dest1+15, 11);
   ft_memcpy(dest2+20, dest2+15, 11);
   printf("After memmove dest = %s\n", dest1);
   printf("After ft_memmove dest = %s\n", dest2);
   return(0);
} */
