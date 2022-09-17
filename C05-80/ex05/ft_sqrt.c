/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:25:58 by hunal             #+#    #+#             */
/*   Updated: 2022/09/11 14:04:06 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	result;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	result = 2;
	while (result * result <= b)
	{
		if (result * result == b)
		{
			return (result);
		}
		result += 1;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n",ft_sqrt(1));
	printf("%d",ft_sqrt(49));
}*/
