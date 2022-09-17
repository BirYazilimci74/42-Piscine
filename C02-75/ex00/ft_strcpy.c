/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:59:39 by hunal             #+#    #+#             */
/*   Updated: 2022/09/06 10:46:36 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	let_counter;

	let_counter = 0;
	while (src[let_counter] != '\0')
	{
		dest[let_counter] = src[let_counter];
		let_counter++;
	}
	dest[let_counter] = '\0';
	return (dest);
}
/*
int	main()
{
	char str1[] = "dfhaeha";
	char str2[] = "cemal";
	ft_strcpy(str1,str2);
	printf("%s",str1);
}*/
