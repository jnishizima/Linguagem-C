#include <stdio.h> 
#include <conio.h> 

int main()
{
    float p_num, s_num;
    printf ("Informe um Valor:  ");
    scanf ("%f", &p_num);
    printf ("\nInforme outro Valor  ");
    scanf ("%f", &s_num);
    
    if (p_num > s_num)
      printf ("Pois o maior Valor e : %5.2f ", p_num);
    else
      printf ("Pois o maior Valor e : %5.2f ", s_num); 
         
  getch();
}
