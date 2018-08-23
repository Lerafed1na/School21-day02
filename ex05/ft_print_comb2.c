/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:57:51 by wned              #+#    #+#             */
/*   Updated: 2018/08/23 09:56:10 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_putchar(char c)

void numbers(int p)
{
	ft_putchar('0'+ p/10);
	ft_putchar('0' + p%10);
}

void ft_print_comb2(void)
{
	int a = 0, b;
	while(a <= 98)
	{
		b = a + 1 ;
		while(b <= 99)
		{
			numbers(a);
			ft_putchar(' ');
			numbers(b);

			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
	
}
