/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:07:13 by licohen           #+#    #+#             */
/*   Updated: 2024/05/17 17:17:02 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <fcntl.h>
# include <unistd.h>

# define BUFFER_SIZE 1

# define ERROR_NAME "File name missing.\n"
# define ERROR_READ "Cannot read file.\n"
# define ERROR_ARGS "Too many arguments.\n"

int		ft_display_file(char *file_path);
void	ft_putstr_error(char *string_error);

#endif