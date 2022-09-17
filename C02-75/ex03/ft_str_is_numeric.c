/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:18:33 by hunal             #+#    #+#             */
/*   Updated: 2022/09/05 13:40:08 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
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
	char str[8] = "2463623";
	int c;

	c = ft_str_is_numeric(str);
	ft_putchar(c + '0');
}*/
