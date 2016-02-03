#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(char n);

int ft_putchar(char c);

int main ()
{
  ft_print_numbers('0'); 
  ft_print_numbers('\n'); 
  return(0); 
}

void ft_print_numbers(char n)
{
  while(n<= '9')
    {
      ft_putchar(n); 
      n++; 
    }
}

int ft_putchar(char c)
{
  write(1,&c,1);
  return(0); 
}
