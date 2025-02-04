/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:18:50 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/04 15:21:51 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

/* int main()
{
    int a = 2;
    int b = 10;
    printf("%d", ft_recursive_power(a, b));
} */