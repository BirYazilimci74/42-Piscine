/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:25:24 by hunal             #+#    #+#             */
/*   Updated: 2022/08/29 17:19:21 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_char((a / 10) + '0');
			print_char((a % 10) + '0');
			print_char(' ');
			print_char((b / 10) + '0');
			print_char((b % 10) + '0');
			if (a != 98)
			{
				print_char(',');
				print_char(' ');
			}
			b++;
		}
		a++;
	}
}
