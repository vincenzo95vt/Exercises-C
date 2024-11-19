/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:39:37 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/11 21:56:07 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] >= '0' && str[j] <= '9'))
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
	char str1[] = "12345";
	char str2[] = "abc123";
	char str3[] = "";
	char str4[] = "987654";
	char str5[] = "42isTheAnswer";

	printf("str1: %s, Resultado: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, Resultado: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: \"%s\", Resultado: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s, Resultado: %d\n", str4, ft_str_is_alpha(str4));
	printf("str5: %s, Resultado: %d\n", str5, ft_str_is_alpha(str5));
	return (0);
}*/
