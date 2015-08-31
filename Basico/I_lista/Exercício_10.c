#include <stdio.h> 
#include <conio.h> 

int main()
{
    float sal, imp, sal_liq;
    printf ("Informe o Salario:  ");
    scanf ("%f", &sal);
    imp = (sal*5)/100;
    sal_liq = sal - imp;
    printf ("\nValor do imposto:  %5.1f", imp);
    printf ("\nValor do Salario Liquido:  %5.1f", sal_liq);

  getch();
}
