/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:54:13 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/19 17:56:20 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str1[] = "hello";	
	char str2[] = "world";
	char str3[] = "hello";
	char str4[] = "HELLO";
	char str5[] = "";

	printf("Comparando '%s' y '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparando '%s' y '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparando '%s' y '%s': %d\n", str1, str4, ft_strcmp(str1, str4));
	printf("Comparando '%s' y '%s': %d\n", str1, str5, ft_strcmp(str1, str5));
	printf("Comparando '%s' y '%s': %d\n", str5, str4, ft_strcmp(str5, str4));
	return (0);
}*/
