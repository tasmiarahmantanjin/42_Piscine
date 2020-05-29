/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:13:22 by trahman           #+#    #+#             */
/*   Updated: 2020/02/12 20:22:26 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int arg;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			ft_putchar(argv[arg][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
