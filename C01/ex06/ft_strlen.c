/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:22:42 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/06 21:44:44 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int	main(void)
{
	char	*name;
	int		length;
	char	digit;

	digit = '0';
	name = "pablo";
	length = ft_strlen(name);
	digit = digit + length;
	write(1, &digit, 1);
	write(1, "X", 1);
	return (0);
}*/
