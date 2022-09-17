/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:42:31 by hunal             #+#    #+#             */
/*   Updated: 2022/09/01 18:15:11 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = (a / b);
	*mod = (a % b);
	}
}

/*int	main ()
{
	int a;
	int b;
	int div;
	int mod;

	a = 100;
	b = 4;
	ft_div_mod(a,b,&div,&mod);
	printf("%d \n",div);
	printf("%d \n",mod);
}*/
