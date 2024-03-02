/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:17:48 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 11:34:54 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/* 
int	main(void)
{
	int	fileDescriptor;

	char str[] = "Hello, World!";
	fileDescriptor = 1;
	ft_putendl_fd(str, fileDescriptor);
	return (0);
} */
