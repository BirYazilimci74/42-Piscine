/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:35:09 by hunal             #+#    #+#             */
/*   Updated: 2022/09/11 15:32:32 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (counter <= nb / 2 && counter <= 46341)
		{
			if (nb % counter == 0)
				return (0);
			counter++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	else if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb) == 0 && nb < 2147483647)
		{
			nb++;
		}
		return (nb);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_find_next_prime(83));
}*/
