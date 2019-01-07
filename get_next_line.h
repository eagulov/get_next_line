/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagulov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 18:33:01 by eagulov           #+#    #+#             */
/*   Updated: 2019/01/06 15:26:40 by eagulov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <limits.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

# define BUFF_SIZE 32
# define DESC 10240
# define MAX_FD 255

int	get_next_line(const int fd, char **line);

#endif
