/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:10:13 by mbeeler           #+#    #+#             */
/*   Updated: 2021/10/29 14:17:00 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	counter;
	int	result;

	counter = 1;
	result = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (++counter <= nb)
			result *= counter;
		return (result);
	}
}
