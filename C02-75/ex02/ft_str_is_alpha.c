/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:38:11 by hunal             #+#    #+#             */
/*   Updated: 2022/09/03 18:24:00 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if ((!(str[i] >= 'a' && str[i] <= 'z'))
				&& (!(str[i] >= 'A' && str[i] <= 'Z')))
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
	char str[] = "yahya74";
	int c;
	
	c = ft_str_is_alpha(str);
	ft_putchar(c + '0');
}*/
