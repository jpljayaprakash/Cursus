/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:32:01 by jlakshma          #+#    #+#             */
/*   Updated: 2024/03/01 16:28:29 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_line(int fd, char *buff, char *stash)
{
	int		bytes;
	char	*temp;

	bytes = 1;
	while (bytes)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
			return (0);
		else if (bytes == 0)
			break ;
		buff[bytes] = '\0';
		if (!stash)
			stash = ft_strdup("");
		temp = stash;
		stash = (ft_strjoin(temp, buff));
		if (!stash)
			return (NULL);
		free (temp);
		temp = NULL;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	return (stash);
}

static char	*extract(char *line)
{
	int		i;
	char	*temp;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0')
		return (NULL);
	temp = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (!temp)
		return (NULL);
	if (temp[0] == '\0')
	{
		free (temp);
		temp = NULL;
		return (NULL);
	}
	line[i + 1] = '\0';
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*buff;
	char		*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	line = read_line(fd, buff, stash);
	free(buff);
	if (!line)
		return (NULL);
	stash = extract(line);
	return (line);
}
/*
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("test_get_next_line.txt", O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return 0;
}
*/

