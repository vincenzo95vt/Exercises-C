/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:19:43 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/18 21:19:41 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i - j + 1]);
			}
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str1[] = "hello world";
	char to_find1[] = "world";
	char str2[] = "goodbye world";
	char to_find2[] = "hello";
	char str3[] = "42 is the answer";
	char to_find3[] = "is";

	printf("Resultado 1: %s\n", ft_strstr(str1, to_find1)); 
	printf("Resultado 2: %s\n", ft_strstr(str2, to_find2)); 
	printf("Resultado 3: %s\n", ft_strstr(str3, to_find3));
	return (0);
}*/
