/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:44:31 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/14 21:21:21 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "HELLO";
	char str2[] = "WORLD!";
	char str3[] = "123ABC";
	char str4[] = "hello";
	char str5[] = "";

	printf("str1: %s, Resultado: %s\n", str1, ft_strupcase(str1));
	printf("str2: %s, Resultado: %s\n", str2, ft_strupcase(str2));
	printf("str3: %s, Resultado: %s\n", str3, ft_strupcase(str3));
	printf("str4: %s, Resultado: %s\n", str4, ft_strupcase(str4));
	printf("str5: \"%s\", Resultado: %s\n", str5, ft_strupcase(str5));
	return (0);
}*/
