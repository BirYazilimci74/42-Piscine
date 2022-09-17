/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:15:32 by hunal             #+#    #+#             */
/*   Updated: 2022/09/06 13:23:42 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while ((src[i] != '\0') && (i < nb))
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
    printf("%s", ft_strncat(dest,src,3));
}*/
