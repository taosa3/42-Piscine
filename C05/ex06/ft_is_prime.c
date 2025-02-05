/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:08:28 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/05 13:09:06 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	if (nb == 0 || nb == 1)
		return (0);
	count = 0;
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}

/* int main()
{
	int a = 11;
	if (ft_is_prime(a) == 1)
		printf("The number %d is prime\n", a);
	else
		printf("The number %d is not prime\n", a);
} */
