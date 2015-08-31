#include <stdio.h> 
#include <conio.h> 

int main()
{
    int p_num, s_num, t_num;
    
    printf ("Informe 3 Numeros:  ");
    scanf ("%d", &p_num);
    scanf ("%d", &s_num);
    scanf ("%d", &t_num);
    
    if (p_num > s_num)
      if(p_num > t_num)
        printf ("Maior Valor :  %5.1d", p_num);
      else
        printf ("Maior Valor :  %5.1d", t_num);
    else
      if (s_num > t_num)
        printf ("Maior Valor :  %5.1d", s_num);
      else
        printf ("Maior Valor :  %5.1d", t_num);
    
  getch();
}
