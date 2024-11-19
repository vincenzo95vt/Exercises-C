/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:05:55 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/14 23:10:38 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n && (s1[i] != '\0' || s2[i] != '\0'))
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
	char str2[] = "hello world";
	char str3[] = "HELLO";
	char str4[] = "hello";
	unsigned int n;

	n = 6;
	printf("Comparando '%s' y '%s' (hasta %u caracteres):
	 %d\n", str1, str2, n, ft_strncmp(str1, str2, n));
	n = 3;
	printf("Comparando '%s' y '%s' (hasta %u caracteres): 
	%d\n", str1, str3, n, ft_strncmp(str1, str3, n));
	n = 6;
	printf("Comparando '%s' y '%s' (hasta %u caracteres): 
	%d\n", str1, str4, n, ft_strncmp(str1, str4, n));
	n = 0;
	printf("Comparando '%s' y '%s' (hasta %u caracteres): 
	%d\n", str1, str4, n, ft_strncmp(str1, str4, n));
	return (0);
}*/
