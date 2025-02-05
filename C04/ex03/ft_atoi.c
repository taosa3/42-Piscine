/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:11:47 by tafonso           #+#    #+#             */
/*   Updated: 2025/02/04 14:36:12 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespace(char *str, int *prt_i)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*prt_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	sign = whitespace(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/* int main()
{
    char a[] = "                         -+----++-----+-+-+---1502a";
    printf("%d", ft_atoi(a));
} */