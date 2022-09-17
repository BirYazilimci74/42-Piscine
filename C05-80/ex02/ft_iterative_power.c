/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:59:33 by hunal             #+#    #+#             */
/*   Updated: 2022/09/08 13:03:30 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	result;

	counter = 1;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (counter <= power)
	{
		result *= nb;
		counter++;
	}
	return (result);
}
/*
int	main()
{
	printf("%d",ft_iterative_power(2,7));
}*/
