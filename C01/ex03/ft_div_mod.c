/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafonso <tafonso@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:00:30 by tafonso           #+#    #+#             */
/*   Updated: 2025/01/28 17:10:43 by tafonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int div;
	int mod;
	printf("%d, %d\n", div, mod);
	ft_div_mod(10, 2, &div, &mod);
	printf("%d, %d\n", div, mod);
}
*/
