/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:27:29 by hunal             #+#    #+#             */
/*   Updated: 2022/09/01 14:31:05 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char str[6] = "yahya";
	int c;

	c = ft_str_is_lowercase(str);
	ft_putchar(c + '0');
}*/
