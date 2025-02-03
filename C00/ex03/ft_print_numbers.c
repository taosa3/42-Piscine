/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:31:19 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/23 15:58:45 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		write (1, &c, 1);
		c++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}
*/
