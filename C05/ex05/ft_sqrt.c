/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:21:28 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/05 12:43:15 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	index = 2;
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			index++;
		}
	}
	return (0);
}

/* int main()
{
    int a = 16;
	if (ft_sqrt(a) == 0)
		printf("The sqrt of this number results in a irracional number, or 0\n");
	if (ft_sqrt(a) >= 2)
    	printf("The sqrt of %d is %d\n", a, ft_sqrt(a));
} */
