/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasta-t <pvasta-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:42:27 by pvasta-t          #+#    #+#             */
/*   Updated: 2024/11/06 23:16:26 by pvasta-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	iter;
	int	iter2;	
	int	temp;

	iter = 0;
	while (iter < size - 1)
	{
		iter2 = 0;
		while (iter2 < size - 1 - iter)
		{
			if (tab[iter2] > tab[iter2 + 1])
			{
				temp = tab[iter2];
				tab[iter2] = tab[iter2 + 1];
				tab[iter2 + 1] = temp;
			}
			iter2++;
		}
		iter++;
	}
}

int main(void) 
{ 
	int num[] = {5, 3, 4, 1, 2}; 
	int size = sizeof(num) / sizeof(num[0]); 
	int i = 0; // Llamada a la función de ordenamiento 
	ft_sort_int_tab(num, size); 
	// Imprimir el array ordenado 
	while (i < size) 
	{ 
		printf("%d ", num[i]); 
		i++; 
	}
	printf("\n"); 
	// Nueva línea después de imprimir todos los elementos return (0); 
}