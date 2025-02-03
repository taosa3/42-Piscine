/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:22:43 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/30 13:24:08 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int main()
{
	char s1[] = "olaa";
	char s2[] = "ol";
	if (ft_strcmp(s1, s2) == 0)
        printf("The strings are equal\n");
    else if (ft_strcmp(s1, s2) > 0)
        printf("The string s1 is greater than s2 \n");
    else if (ft_strcmp(s1, s2) < 0)
        printf("The string s1 is less than s2 \n");

    printf("Value returned: %d\n", ft_strcmp(s1, s2));
} */
