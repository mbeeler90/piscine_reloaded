/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:16:14 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/11/02 10:37:26 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	print_error(int argc)
{
	if (argc == 1)
		putstr(2, "File name missing.\n");
	else
		putstr(2, "Too many arguments.\n");
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc != 2)
	{
		print_error(argc);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		putstr(2, "open() error\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		putstr(1, buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
