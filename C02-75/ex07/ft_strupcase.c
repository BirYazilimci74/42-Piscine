/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:13:17 by hunal             #+#    #+#             */
/*   Updated: 2022/09/03 15:45:27 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strupcase(char *str)
{
	int	let_counter;

	let_counter = 0;
	while (str[let_counter] != '\0')
	{
		if (str[let_counter] >= 97 && str[let_counter] <= 122)
			str[let_counter] -= 32;
		let_counter++;
	}
	return (str);
}
/*
int	main()
{
	char str[5] = "YaHyA74";
	ft_strupcase(str);
	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	ft_putchar(str[6]);
}*/
