/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:49:54 by hunal             #+#    #+#             */
/*   Updated: 2022/08/31 17:15:54 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	num1;
	int	num2;
	int	chng;

	num1 = 0;
	while (num1 <= (size - 1))
	{
		num2 = 0;
		while (num2 <= (size - 1))
		{
			if (tab[num1] < tab[num2])
			{
			chng = tab[num1];
			tab[num1] = tab[num2];
			tab[num2] = chng;
			}
			num2++;
		}
		num1++;
	}
}
/*
int	main()
{
	int numbers[] = {23,4,1,74,100};
	ft_sort_int_tab(numbers,5);
	printf("%d ",numbers[0]);
	printf("%d ",numbers[1]);
	printf("%d ",numbers[2]);
	printf("%d ",numbers[3]);
	printf("%d ",numbers[4]);
}*/
