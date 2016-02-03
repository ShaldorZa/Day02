/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:59:55 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/03 14:00:00 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_comb(void);

int main()
{
  ft_print_comb();
  ft_putchar('\n');
  return(0);
}

int ft_putchar(char c)
{
  write(1,&c,1);
  return(0);
}

void ft_print_comb(void)
{
  int a;
  int b;
  int c;

  a = '0';

  while(a <= '7')
    {
      b = a + 1;
      while(b <= '8' )
	{
	  c = b + 1;
	  while(c <= '9')
	    {
	      ft_putchar(a);
	      ft_putchar(b);
	      ft_putchar(c);

	      if(a != '7' || b != '8' || c != '9')
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
