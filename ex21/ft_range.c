/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:10:13 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/02 11:09:22 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	array = (int *) malloc(sizeof(*array) * len);
	if (!array)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
