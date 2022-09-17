/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:50:44 by hunal             #+#    #+#             */
/*   Updated: 2022/09/11 15:31:55 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if ((nb == 0 || nb == 1) || nb < 0)
		return (0);
	else
	{
		while (counter <= nb / 2)
		{
			if (nb % counter == 0)
				return (0);
			counter++;
		}
	}
	return (1);
}
/*
int	main()
{
	printf("%d",ft_is_prime(4));
}*/
