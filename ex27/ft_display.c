/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:06:55 by licohen           #+#    #+#             */
/*   Updated: 2024/05/17 17:18:01 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	ft_display_file(char *file_path)
{
	int		fd;
	char	buffer[BUFFER_SIZE];

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		return (fd);
	while (read(fd, buffer, BUFFER_SIZE))
		write(1, buffer, BUFFER_SIZE);
	return (fd);
}
