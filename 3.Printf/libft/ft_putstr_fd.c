/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:58:48 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:41:25 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
			write(fd, s++, 1);
	}
}
/* int main()
{
	char *message = "Hello, World!";
	int file_descriptor = 1;

	ft_putstr_fd(message, file_descriptor);

	return (0);
} */