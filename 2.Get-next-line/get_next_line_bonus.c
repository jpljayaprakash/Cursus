/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:31:41 by jlakshma          #+#    #+#             */
/*   Updated: 2024/03/01 16:33:08 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_line(int fd, char *buf, char *stash)
{
	int		bytes;
	char	*temp;

	bytes = 1;
	while (bytes)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
			return (0);
		else if (bytes == 0)
			break ;
		buf[bytes] = '\0';
		if (!stash)
			stash = ft_strdup("");
		temp = stash;
		stash = (ft_strjoin(temp, buf));
		if (!stash)
			return (NULL);
		free (temp);
		temp = NULL;
		if (ft_strchr(buf, '\n'))
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
	char		*buf;
	char		*line;
	static char	*stash[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	line = read_line(fd, buf, stash[fd]);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	stash[fd] = extract(line);
	return (line);
}
