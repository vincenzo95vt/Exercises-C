/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:06:39 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/12 20:33:55 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!((str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= 'a' && str[j] <= 'z')))
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
	char	str1[] = "pablo";
	char	str2[] = "pablo123";
	char	str3[1];
	
	str3[0] = '\0';
	printf("str1: %s, Resultado: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, Resultado: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s, Resultado: %d\n", str3, ft_str_is_alpha(str3));
	return (0);
}*/
