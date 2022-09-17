/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:11:23 by hunal             #+#    #+#             */
/*   Updated: 2022/09/04 18:01:08 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	let_counter;

	let_counter = 0;
	while (str[let_counter] != '\0')
	{
		if (str[let_counter] >= 65 && str[let_counter] <= 90)
			str[let_counter] += 32;
		let_counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	u_l;

	ft_strlowcase(str);
	u_l = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (u_l == 1)
			{
				str[counter] -= 32;
				u_l = 0;
			}
		}
		else if (str[counter] >= '0' && str[counter] <= '9')
			u_l = 0;
		else
			u_l = 1;
		counter++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*a = ft_strcapitalize(str);
	printf("%s", a);
}*/
