/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:58:07 by oadewumi          #+#    #+#             */
/*   Updated: 2024/01/31 16:46:58 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	
}

#include <fcntl.h>

int	main(void)
{
	int	fd;
	int bytes;
	char *str;

	fd = open("test.txt", O_RDONLY);
	bytes = read(fd, str, 12);
	str[bytes + 1]= '\0';
	return (bytes);
}