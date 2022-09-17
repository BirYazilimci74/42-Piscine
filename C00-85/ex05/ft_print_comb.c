/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:40:51 by hunal             #+#    #+#             */
/*   Updated: 2022/08/29 17:20:16 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	print_char1(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	middle;
	char	end;

	first = '0';
	while (first <= '7')
	{
		middle = first +1;
		while (middle <= '8')
		{
			end = middle +1;
			while (end <= '9')
			{
				print_char2(first, middle);
				print_char1(end);
				if (first != '7')
				{
					print_char2(',', ' ');
				}
				end++;
			}
			middle++;
		}
		first++;
	}
}
