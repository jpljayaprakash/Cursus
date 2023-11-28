/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:02:07 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:32:16 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t l)
{
	return (ft_memset(s, '\0', l));
}
/* int main()
{
	char a[]="Memset example";

	puts(memset(a,0,5));
	puts(ft_bzero(a,5));
	return (0);
} */