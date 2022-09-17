/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:35:27 by hunal             #+#    #+#             */
/*   Updated: 2022/08/30 10:58:45 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	tmpr;

	tmpr = *a;
	*a = *b;
	*b = tmpr;
}

/*int main()
{
	int x;
	int y;

	x = 4;
	y = 3;
	ft_swap(&x,&y);
	ft_putchar(x + '0');
	ft_putchar(y + '0');
}
*/
