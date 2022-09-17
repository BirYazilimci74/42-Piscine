/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:22:17 by hunal             #+#    #+#             */
/*   Updated: 2022/09/14 11:38:09 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	counter;
	int	*ctrl;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ctrl = (int *)malloc(sizeof(int) * size);
	if (ctrl == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ctrl;
	counter = 0;
	while (max > min)
	{
		ctrl[counter] = min;
		min++;
		counter++;
	}
	return (size);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 1;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
