/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:52:59 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/12 20:34:08 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] >= 'a' && str[j] <= 'z'))
		{
			i = 0;
			break ;
		}
		j++;
	}
	return (i);
}

/*int main(void) 
{ 
	char str1[] = "pablo"; // Solo letras minúsculas
	char str2[] = "Pablo"; // Mezcla de mayúsculas y minúsculas
	char str3[] = ""; // Cadena vacía
	char str4[] = "pabl0"; // Mezcla de letras y números
	char str5[] = "pablo!"; // Mezcla de letras y otros caracteres 
	// Probar diferentes cadenas
	
	printf("str1: %s, Resultado: %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, Resultado: %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: \"%s\", Resultado: %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s, Resultado: %d\n", str4, ft_str_is_lowercase(str4));
	printf("str5: %s, Resultado: %d\n", str5, ft_str_is_lowercase(str5));
	return (0);
}*/
