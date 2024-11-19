/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:27:35 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/11 22:43:35 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "hello";
	char str2[] = "world!";
	char str3[] = "123abc";
	char str4[] = "HELLO";
	char str5[] = "";

	printf("str1: %s, Resultado: %s\n", str1, ft_strupcase(str1));
	printf("str2: %s, Resultado: %s\n", str2, ft_strupcase(str2));
	printf("str3: %s, Resultado: %s\n", str3, ft_strupcase(str3));
	printf("str4: %s, Resultado: %s\n", str4, ft_strupcase(str4));
	printf("str5: \"%s\", Resultado: %s\n", str5, ft_strupcase(str5));
	return (0);
}*/
