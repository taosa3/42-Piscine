/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:36:26 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/05 14:18:29 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	k;

	k = 1;
	while (k < ac)
	{
		i = 0;
		while (av[k][i])
		{
			write (1, &av[k][i], 1);
			i++;
		}
		write (1, "\n", 1);
		k++;
	}
	return (0);
}
