/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:17:53 by manuelbeele       #+#    #+#             */
/*   Updated: 2021/11/02 10:23:20 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
