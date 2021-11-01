/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:10:13 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/01 12:25:31 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	copy = (char *) malloc(sizeof(*copy) * (len + 1));
	if (!copy)
		return (0);
	len = -1;
	while (src[++len] != '\0')
		copy[len] = src[len];
	copy[len] = '\0';
	return (copy);
}
