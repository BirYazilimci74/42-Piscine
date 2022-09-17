/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:22:54 by hunal             #+#    #+#             */
/*   Updated: 2022/09/07 10:07:13 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	let_counter;

	let_counter = 0;
	while ((let_counter < n) && src[let_counter] != '\0')
	{
		dest[let_counter] = src[let_counter];
		let_counter++;
	}
	while (let_counter < n)
	{
		dest[let_counter] = '\0';
		let_counter++;
	}
	return (dest);
}
/*
int	main()
{
	char str1[] = "yahya";
	char str2[] = "cemal";
	ft_strncpy(str1,str2,3);
	printf("%s",str1);
	return (0);
}*/
