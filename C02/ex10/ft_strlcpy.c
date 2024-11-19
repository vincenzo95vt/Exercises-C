/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:51:28 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/14 21:39:46 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[i] != '\0' && size - 1 > 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int main(void) 
{ 
	char src[] = "hello, world"; 
	char dest[20]; 
	unsigned int result; // Llamada a la función ft_strlcpy 
	result = ft_strlcpy(dest, src, sizeof(dest)); // Imprimir los resultados 
	printf("Fuente: %s\n", src); printf("Destino: %s\n", dest); 
	printf("Longitud de la fuente: %u\n", result); 
	// Caso cuando el tamaño de destino es menor que la longitud de la fuente 
	
	char dest2[6]; 
	result = ft_strlcpy(dest2, src, sizeof(dest2)); 
	printf("\nCaso con tamaño de destino limitado:\n"); 
	printf("Fuente: %s\n", src); 
	printf("Destino: %s\n", dest2); 
	printf("Longitud de la fuente: %u\n", result); 
	return (0);
}*/
