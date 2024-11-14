/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:23:34 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/06 21:45:54 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_rev_int_tab(int *tab, int size)
{
	int	iter;
	int	temp;

	iter = 0;
	while (iter < size - 1)
	{
		temp = tab[iter];
		tab[iter] = tab[size];
		tab[size] = temp;
		iter++;
		size--;
	}
}
