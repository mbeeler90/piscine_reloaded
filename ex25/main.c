/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/01 22:29:16 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putchar(char c);

int	main(void)
{
	int	array[] = {1, 7, 9};
	int	length;

	length = 3;
	ft_foreach(array, length, ft_putnbr);
	return (0);
}
