/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:11:26 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/17 22:01:44 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		if (src[j] == '\0')
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

/*int main(void)
{
	char dest[50] = "Hello";
	char src[] = " World";
	char dest2[50] = "Esto es una";
	char src2[] = " cadena de ejemplo";
	char dest3[50] = "";
	char src3[] = "Start";

	ft_strcat(dest, src);
	ft_strcat(dest2, src2);
	ft_strcat(dest3, src3);
	printf("Resultado 1: %s\n", dest);
	printf("Resultado 2: %s\n", dest2);
	printf("Resultado 3: %s\n", dest3);
	return (0);
}*/
