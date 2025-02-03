/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:12:22 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/28 14:43:22 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;

	n = 0;
	temp = 0;
	size--;
	while (n < size)
	{
		temp = tab[n];
		tab[n] = tab[size];
		tab[size] = temp;
		n++;
		size--;
	}
}

/*int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

}
*/
