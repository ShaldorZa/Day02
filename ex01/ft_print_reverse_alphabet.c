#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(char r);

int ft_putchar(char c); 

int main()
{
  ft_print_reverse_alphabet('z'); 
  ft_print_reverse_alphabet('\n'); 
  return(0); 
}

void ft_print_reverse_alphabet(char r)
{
  while(r >= 'a')
    {
      ft_putchar(r);
      r--; 
    }
}

int ft_putchar(char c)
{
  write(1,&c,1);
  return(0); 
}
