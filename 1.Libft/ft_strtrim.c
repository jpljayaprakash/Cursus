/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:28 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/24 16:38:28 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/* int main() {
    const char *str = "   Hello, world!   ";
    const char *set = " ";

    char *trimmed = ft_strtrim(str, set);

    if (trimmed != NULL) {
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed);  // Don't forget to free the dynamically allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */