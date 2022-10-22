/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:02:15 by hunal             #+#    #+#             */
/*   Updated: 2022/09/12 13:19:15 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	counter;

	(void)ac;
	counter = 0;
	while (av[0][counter] != '\0')
	{
		write(1, &av[0][counter], 1);
		counter++;
	}
	write(1, "\n", 1);
	return (0);
}
