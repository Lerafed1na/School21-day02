/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:37:20 by wned              #+#    #+#             */
/*   Updated: 2018/08/23 09:56:39 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		 ft_putchar(char c)

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while(a<='7')
	{
		b = a + 1;
		while(b<='8')
		{
			c = b + 1;
			while(c<='9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);

				if (a != 7 && b != 8 && c != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

