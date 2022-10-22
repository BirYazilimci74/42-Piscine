/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:36:01 by hunal             #+#    #+#             */
/*   Updated: 2022/09/11 13:50:48 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	counter;
	int	index;

	index = ac -1;
	while (index > 0)
	{
		counter = 0;
		while (av[index][counter] != '\0')
		{
			write(1, &av[index][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
		index--;
	}
	return (0);
}
