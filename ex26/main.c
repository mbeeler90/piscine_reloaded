/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/02 10:04:27 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_count_if(char **tab, int (*f)(char*));
void	ft_putchar(char c);
int		ft_addnbr(char *number);

int		main(void)
{
	char	*array[] = {"1", "12", "1", "23", "111", "214", "1", "87654", (char*)0};

	ft_putnbr(ft_count_if(array, &ft_addnbr));
	return (0);
}
