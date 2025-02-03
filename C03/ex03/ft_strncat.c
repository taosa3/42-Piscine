/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:28:28 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/30 13:29:25 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i] && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

/* int main()
{
	char a[] = " bem?? :)";
	char b[] = "tudo";
	unsigned int n = 3;
	printf("Before: %s\n", b);
	printf("After: %s\n", ft_strncat(b, a, n));

} */
