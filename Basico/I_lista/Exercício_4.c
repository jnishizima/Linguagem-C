#include <stdio.h> 
#include <conio.h> 

int main()
{
    int p_num, s_num;
    
    printf("Forne�a Dois Numeros:  ");
    scanf ("%d", &p_num);
    scanf ("%d", &s_num);

    if (p_num == s_num)
      printf ("Os Valores s�o Iguais");
    else
      if (p_num < s_num)
        printf ("O Menor Valor: %5.2d ", p_num);
      else
        printf ("O Menor Valor: %5.2d ", s_num);
    
  getch();
}
