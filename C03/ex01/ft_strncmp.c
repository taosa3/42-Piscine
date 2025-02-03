/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:24:22 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/30 13:26:47 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && *s2 && (i < n))
	{
		i++;
		s1++;
		s2++;
	}
	if (i < n)
		return (*s1 - *s2);
	return (0);
}

/* int main()
{
	char s1[] = "ola";
	char s2[] = "olaaa";
	unsigned int N = 7;

	if (ft_strncmp(s1, s2, N) == 0)
        printf("The strings are equal\n");
    else if (ft_strncmp(s1, s2, N) > 0)
        printf("The string s1 is greater than s2 \n");
    else if (ft_strncmp(s1, s2, N) < 0)
        printf("The string s1 is less than s2 \n");

    printf("Value returned: %d\n", ft_strncmp(s1, s2, N));
} */
