/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:56:31 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/03 17:58:02 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0 && nb == 0)
        return (1);
    return (nb ^ power);
}

int main()
{
    int a = 5;
    int power = 2;
    printf("%d", ft_iterative_power(a, power));
}