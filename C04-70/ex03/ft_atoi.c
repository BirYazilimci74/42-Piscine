/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:43:22 by hunal             #+#    #+#             */
/*   Updated: 2022/09/08 18:15:15 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	minus;
	int	counter;
	int	nb;

	counter = 0;
	minus = 0;
	nb = 0;
	while ((str[counter] <= 13 && str[counter] >= 9) || str[counter] == ' ')
		counter++;
	while (str[counter] == '+' || str[counter] == '-')
	{
		if (str[counter] == '-')
			minus++;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		nb = (nb * 10) + (str[counter] - '0');
		counter++;
	}
	if (minus % 2 == 1)
		return (-nb);
	return (nb);
}
/*
int main()
{
	int a = ft_atoi("   --++--++12h34ab567");
	printf("%d", a);
}*/
