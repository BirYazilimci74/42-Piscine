/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:49:30 by hunal             #+#    #+#             */
/*   Updated: 2022/09/05 13:10:01 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] <= 126 && str[counter] >= 32))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/*
int	main()
{
	int p;
	int up;

	p = ft_str_is_printable("yahya");
	up = ft_str_is_printable("\n");
	printf("%d", p);
	printf("\n%d",up);
}*/
