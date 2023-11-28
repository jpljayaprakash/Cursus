/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:57:53 by jlakshma          #+#    #+#             */
/*   Updated: 2023/10/25 10:32:07 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		result;
	int		sign;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (sign * result);
}
/* int main ()
{
   int val,val1;
   char str[20];

   strcpy(str, "-21474+83652  ");
   val = atoi(str);
   val1 = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   printf("String value = %s, Int value = %d\n", str, val1);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   val1 = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   printf("String value = %s, Int value = %d\n", str, val1);

   return(0);
} */