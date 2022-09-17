/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:54:54 by hunal             #+#    #+#             */
/*   Updated: 2022/09/14 11:09:31 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		counter;
	char	*str;

	counter = 0;
	str = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	while (src[counter] != '\0')
	{
		str[counter] = src[counter];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
/*
int	main()
{
	char src[] = "yahya";
	printf("%s", ft_strdup(src));
}*/
