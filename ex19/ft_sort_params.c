/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:51:17 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/01 11:47:23 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	stringcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char	*dummy;

	dummy = *a;
	*a = *b;
	*b = dummy;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc - 1)
	{
		if (stringcmp(argv[i], argv[i + 1]) > 0)
		{
			swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
	return (0);
}
