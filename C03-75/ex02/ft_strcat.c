/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:29:35 by hunal             #+#    #+#             */
/*   Updated: 2022/09/06 13:14:24 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[i] != '\0')
	{
		dest[counter] = src[i];
		counter++;
		i++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
int main()
{
    char src[] = "Saray";
    char dest[50] = "Galata ";
    printf("%s", ft_strcat(dest,src));
}*/
