/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:41:50 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/14 21:34:01 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[0] >= 'a' && str[0] <= 'z'))
		{
			str[0] -= 32;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i -1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "hello world";
	char str2[] = "c programming";
	char str3[] = "42isTheAnswer";
	char str4[] = "this iS a Test";
	char str5[] = "";
	char str6[] = "salut, comment tu vas ? 
	42mots quarante-deux; cinquante+et+un";

	printf("str1: %s, Resultado: %s\n", str1, ft_strcapitalize(str1));
	printf("str2: %s, Resultado: %s\n", str2, ft_strcapitalize(str2));
	printf("str3: %s, Resultado: %s\n", str3, ft_strcapitalize(str3));
	printf("str4: %s, Resultado: %s\n", str4, ft_strcapitalize(str4));
	printf("str5: \"%s\", Resultado: %s\n", str5, ft_strcapitalize(str5));
	printf("str6: %s, Resultado: %s\n", str6, ft_strcapitalize(str6));
	return (0);
}*/
