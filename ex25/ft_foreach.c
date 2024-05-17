/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:28:18 by licohen           #+#    #+#             */
/*   Updated: 2024/05/17 12:26:18 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* void	print_number(int n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	int length = 5;

	ft_foreach(array, length, print_number);

	return (0);
} */