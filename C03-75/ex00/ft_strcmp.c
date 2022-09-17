/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:29:40 by hunal             #+#    #+#             */
/*   Updated: 2022/09/07 15:12:51 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter])
		&& (s1[counter] != '\0' || s2[counter] != '\0'))
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
/*
int	main()
{
	char *s1 = "yahyga", *s2 = "yahyza";
	int a = ft_strcmp(s1,s2);

	printf("%d", a);
}*/
