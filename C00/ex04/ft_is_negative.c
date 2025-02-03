/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:33:57 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/23 15:59:53 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 2);
	}
	else
	{
		write (1, "P", 2);
	}
}

/*int main(void)
{
 int n = -100;
 ft_is_negative(n);
}
*/
