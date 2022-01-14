/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/02 11:10:49 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		*ft_range(int min, int max);
void	ft_putchar(char c);

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = -3;
	max = 4;
	array = ft_range(min, max);
	i = 0;
	while (min < max)
	{
		ft_putnbr(array[i]);
		i++;
		min++;
		ft_putchar('\n');
	}
	return (0);
}
