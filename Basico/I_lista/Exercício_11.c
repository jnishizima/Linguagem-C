#include <stdio.h>
#include <conio.h>

int main()
{
   float sal, reajuste, sal_novo;
    
   printf ("Informe o Salario:  ");
   scanf ("%f", &sal);
   reajuste = sal*25/100;
   sal_novo = sal + reajuste;
   
   printf ("\nO Valor do Novo Salario:  %5.1f", sal_novo);
   printf ("\nO Valor do Reajuste:  %5.1f", reajuste);
   printf ("\nO Valor do Salario Anterior:  %5.1f", sal);
   
  getch();
}
        
