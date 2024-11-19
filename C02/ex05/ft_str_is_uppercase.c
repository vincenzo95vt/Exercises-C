/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:00:07 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/12 20:34:42 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] >= 'A' && str[j] <= 'Z'))
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
	char str1[] = "PABLO"; // Solo letras minúsculas
	char str2[] = "Pablo"; // Mezcla de mayúsculas y minúsculas
	char str3[] = ""; // Cadena vacía
	char str4[] = "pabl0"; // Mezcla de letras y números
	char str5[] = "pablo"; // Mezcla de letras y otros caracteres 
	// Probar diferentes cadenas
	
	printf("str1: %s, Resultado: %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, Resultado: %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: \"%s\", Resultado: %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, Resultado: %d\n", str4, ft_str_is_uppercase(str4));
	printf("str5: %s, Resultado: %d\n", str5, ft_str_is_uppercase(str5));
	return (0);
}*/