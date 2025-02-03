/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:07:06 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/28 14:45:48 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = 0;
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
    int size = 5;
	int i;
	i = 0;
	int a[] = {4, 1, 3, 0, 5};
	while (i < size)
	{
		printf("Before:");
		printf("%d, ", a[i]);
		i++;
	}
    printf("\n");
	
	ft_sort_int_tab(a, size);

	i = 0;
	while (i < size)
	{
		printf("After:");
		printf("%d, ", a[i]);
		i++;
	}
    printf("\n");
}
*/
