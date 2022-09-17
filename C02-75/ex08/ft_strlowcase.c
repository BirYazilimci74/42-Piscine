/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:32:55 by hunal             #+#    #+#             */
/*   Updated: 2022/09/05 11:31:42 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strlowcase(char *str)
{
	int	let_counter;

	let_counter = 0;
	while (str[let_counter] != '\0')
	{
		if (str[let_counter] >= 65 && str[let_counter] <= 90)
			str[let_counter] += 32;
		let_counter++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[7] = "YaHyA74";
	ft_strlowcase(str);
	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	ft_putchar(str[6]);
}*/
