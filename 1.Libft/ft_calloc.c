/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:59:29 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 14:13:57 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*rtn;
	size_t	s;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	if (nitems > SIZE_MAX / size || nitems < 0 || size < 0)
		return (NULL);
	s = nitems * size;
	rtn = (void *)malloc(s);
	if (!rtn)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memset(rtn, 0, (s));
	return (rtn);
}
/* 
int	main(void)
{
	size_t num_elements = SIZE_MAX;
	size_t element_size = SIZE_MAX;

	int *array = (int *)ft_calloc(num_elements, element_size);

	if (array != NULL)
	{
		for (size_t i = 0; i < num_elements; i++)
		{
			printf("array[%zu] = %d\n", i, array[i]);
		}

		free(array);
	}
	else
	{
		perror("ft_calloc");
	}

	return (0);
} */
