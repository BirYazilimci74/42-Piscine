/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:43:48 by hunal             #+#    #+#             */
/*   Updated: 2022/08/31 15:40:40 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmpr;
	int	let_counter;

	let_counter = 0;
	while (let_counter <= (size - 1))
	{
		tmpr = tab[let_counter];
		tab[let_counter] = tab[size - 1];
		tab[size - 1] = tmpr;
		let_counter++;
		size--;
	}
}
/*
int	main()
{
	int numbers[] = {0,1,2,3,4,5,6,7,8};
	ft_rev_int_tab(numbers,9);
	printf("%d ",numbers[4]);
}*/
