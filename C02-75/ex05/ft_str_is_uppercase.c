/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:34:31 by hunal             #+#    #+#             */
/*   Updated: 2022/09/01 14:45:30 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}
/*
int	main()
{
	char str[8] = "YAHYA";
	int c;

	c = ft_str_is_uppercase(str);
	ft_putchar(c + '0');
}*/
