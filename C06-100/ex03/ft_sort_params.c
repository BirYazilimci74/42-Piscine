/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunal <hunal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:21:22 by hunal             #+#    #+#             */
/*   Updated: 2022/09/12 12:00:36 by hunal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	c;

	c = 0;
	while ((str1[c] == str2[c]) && (str1[c] != '\0' || str2[c] != '\0'))
	{
		c++;
	}
	return (str1[c] - str2[c]);
}

int	main(int ac, char **av)
{
	int	ind1;
	int	ind2;
	int	i;

	ind1 = 1;
	while (ind1 <= ac -1)
	{
		ind2 = 1;
		while (ind2 <= ac -1)
		{
			if (ft_strcmp(av[ind1], av[ind2]) < 0)
				ft_swap(&av[ind1], &av[ind2]);
			ind2++;
		}
		ind1++;
	}
	i = 1;
	while (i <= ac -1)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
