/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:32:52 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/21 19:39:45 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	fd = open("/test.txt", O_RDONLY);
	get_next_line(fd);
	close(fd);
}
