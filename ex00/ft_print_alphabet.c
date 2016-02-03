#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(char c); 

int ft_putchar(char d); 

int main()
{
  ft_print_alphabet('a'); 
  ft_print_alphabet('\n'); 
  return(0); 
}

void ft_print_alphabet(char c)
{
  while(c <= 'z')
    {
      ft_putchar(c);
      c++;
    }
}

int ft_putchar(char d)
{
  write(1,&d, 1);
  return(0);
}
