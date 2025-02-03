/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:41:33 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/03 17:43:08 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    return (ft_recursive_factorial(nb - 1) * nb);
}

/* int main()
{
    int a = 10;
    printf("%d", ft_recursive_factorial(a));
} */