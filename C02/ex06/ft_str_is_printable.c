/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:07:23 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/12 20:34:21 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] >= 32 && str[j] <= 126))
		{
			i = 0;
			break ;
		}
		j++;
	}
	return (i);
}

/*int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello\tWorld";
	char str3[] = "";
	char str4[] = "Printable123";
	char str5[] = "New\nLine";

	printf("str1: %s, Resultado: %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s, Resultado: %d\n", str2, ft_str_is_printable(str2));
	printf("str3: \"%s\", Resultado: %d\n", str3, ft_str_is_printable(str3));
	printf("str4: %s, Resultado: %d\n", str4, ft_str_is_printable(str4));
	printf("str5: %s, Resultado: %d\n", str5, ft_str_is_printable(str5));
	return (0);
}*/
