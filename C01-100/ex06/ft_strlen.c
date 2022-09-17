/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:33:49 by hunal             #+#    #+#             */
/*   Updated: 2022/09/03 15:42:38 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	let_counter;

	let_counter = 0;
	while (str[let_counter] != '\0')
	{
		let_counter++;
	}
	return (let_counter);
}
/*
int	main()
{
	int a;

	a = ft_strlen("Yahya");
	printf("%d",a);
}*/
