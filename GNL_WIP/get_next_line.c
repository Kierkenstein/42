/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:36:12 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/21 20:28:16 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	buffer[10] = "";
	char 		*tmp;

	size_t		len;
	int			i;

	len = read(fd, buffer, 10);
	if (len == -1)
		return (NULL);
	else if (len == 0)
	//	quelque chose
	else 
	
	while (i < len)
	{
		if (buffer[i] == '\n')

	}
	//	gestion derreurs
	//	verifier presence /n ou /0
}
