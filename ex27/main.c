/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:05:48 by licohen           #+#    #+#             */
/*   Updated: 2024/05/17 17:18:23 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_display_file(av[1]) == -1)
			ft_putstr_error(ERROR_READ);
	}
	else if (ac == 1)
		ft_putstr_error(ERROR_NAME);
	else if (ac > 2)
		ft_putstr_error(ERROR_ARGS);
	return (0);
}
