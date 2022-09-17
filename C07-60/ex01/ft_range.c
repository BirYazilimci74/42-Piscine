/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:57:38 by hunal             #+#    #+#             */
/*   Updated: 2022/09/14 11:35:05 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*mat;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	mat = (int *)malloc(size * sizeof(int));
	while (min < max)
	{
		mat[i] = min;
		min++;
		i++;
	}
	return (mat);
}
/*
int	main()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = -6;
	max = 4;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
