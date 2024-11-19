/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:21:56 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/19 17:57:26 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_length;
	unsigned int	s_length;
	unsigned int	i;
	unsigned int	u;

	d_length = 0;
	s_length = 0;
	i = 0;
	while (dest[d_length] != '\0')
		d_length++;
	while (src[s_length])
		s_length++;
	if (size <= d_length)
		return (size + s_length);
	u = size - d_length - 1;
	while (src[i] != '\0' && i < u)
	{
		dest[d_length + i] = src[i];
		i++;
	}
	dest[d_length + i] = '\0';
	return (d_length + s_length);
}

/*int main(void)
{
	char dest1[20] = "Hello";
	char src1[] = " World";
	char dest2[20] = "Good";
	char src2[] = " Morning";
	char dest3[20] = "";
	char src3[] = "Start"; // Llamadas a la función ft_strlcat 

	size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
	size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
	size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
	printf("Destino 1: %s\nResultado 1: %zu\n", dest1, result1);
	printf("Destino 2: %s\nResultado 2: %zu\n", dest2, result2);
	printf("Destino 3: %s\nResultado 3: %zu\n", dest3, result3);
	return (0);
}*/