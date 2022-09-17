/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:05:21 by hunal             #+#    #+#             */
/*   Updated: 2022/09/08 13:07:10 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	counter;

	counter = 1;
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (counter <= power)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*
int	main()
{
	printf("%d",ft_recursive_power(6,2));
}*/
