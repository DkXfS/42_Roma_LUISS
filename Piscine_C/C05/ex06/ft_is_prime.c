/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apanthap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:27:24 by apanthap          #+#    #+#             */
/*   Updated: 2020/12/09 16:06:07 by apanthap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int lst_dg;
	int i;

	lst_dg = nb % 10;
	if (nb <= 1)
		return (0);
	if (nb != 5 && lst_dg == 5)
		return (0);
	if (nb > 2 && nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
