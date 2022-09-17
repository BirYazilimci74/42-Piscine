/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:09:48 by hunal             #+#    #+#             */
/*   Updated: 2022/09/05 16:20:28 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	let_counter;
	unsigned int	length;

	length = ft_strlen(src);
	let_counter = 0;
	if (size != 0)
	{	
		while ((let_counter < size -1) && src[let_counter] != '\0')
		{
			dest[let_counter] = src[let_counter];
			let_counter++;
		}
		dest[let_counter] = '\0';
	}
	return (length);
}
/*
int main()
{
	char str[] = "yahya";
	char dest[6] = "";

	int a = ft_strlcpy(dest, str, 6);
	printf("%d | %s", a, dest);
}*/
