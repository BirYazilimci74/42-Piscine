/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:27:59 by hunal             #+#    #+#             */
/*   Updated: 2022/09/07 17:53:05 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	if (str[c1] == '\0')
	{
		return (str);
	}
	while (str[c1] != '\0')
	{	
		c2 = 0;
		while (str[c1 + c2] == to_find[c2] && str[c1 + c2] != '\0')
		{
			if (to_find[c2 + 1] == '\0')
			{
				return (&str[c1]);
			}
			c2++;
            c1 = 0;
		}
		c1++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "yayhwıjrtşyahaqwa";
	char to_find[] = "yah";
	printf("%s", ft_strstr(str,to_find));
}*/
