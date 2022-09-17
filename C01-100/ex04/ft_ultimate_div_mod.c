/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:39:23 by hunal             #+#    #+#             */
/*   Updated: 2022/09/03 13:48:43 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = (*a / *b);
		mod = (*a % *b);
		*a = div;
		*b = mod;
	}
}
/*
int	main()
{
	int num1;
	int num2;

	num1 = 10;
	num2 = 4;
	ft_ultimate_div_mod(&num1,&num2);
	printf("num1 =%d \n",num1);
	printf("num2 =%d \n",num2);
}*/
