#include <unistd.h>

void  ft_nbrchar(int nbr);
void  ft_print(char a, char b);
void  ft_putnbr(int nb);

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
      write(1, "-", 1);
      nb = -nb;
    }
    ft_nbrchar(nb);
}

void    ft_nbrchar(int nbr)
{
    char    div;
    char    mod;
  
  if(nbr >= 10)
  {
    ft_nbrchar(nbr / 10);  
  }
    mod = nbr % 10 + '0';
    write(1, &mod, 1);
  } 
