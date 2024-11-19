/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:03:19 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/17 22:19:13 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		while (j <= nb - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		if (j > nb)
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

	ft_strncat(dest, src, 5);
	ft_strncat(dest2, src2, 7);
	ft_strncat(dest3, src3, 4);
	printf("Resultado 1: %s\n", dest);
	printf("Resultado 2: %s\n", dest2);
	printf("Resultado 3: %s\n", dest3);
	return (0);
}*/
