/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:12:21 by hunal             #+#    #+#             */
/*   Updated: 2022/09/11 13:52:15 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	counter;
	int	index;

	index = 1;
	while (index <= ac -1)
	{
		counter = 0;
		while (av[index][counter] != '\0')
		{
			write(1, &av[index][counter], 1);
			counter++;
		}
		index++;
		write(1, "\n", 1);
	}
	return (0);
}
