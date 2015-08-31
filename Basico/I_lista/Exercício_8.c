#include <stdio.h> 
#include <conio.h> 

int main()
{
    float dep, juros, rend;
    printf ("Informe o Valor do Deposito:  ");
    scanf ("%f", &dep);
    printf ("Informe o Valor da Taxa de Juros:  ");
    scanf ("%f", &juros);
    rend = (dep*juros)/100;
    printf ("\nvalor do Desposito: %5.1f", dep);
    printf ("\nValor do Rendimento: %5.1f", rend);
    printf ("\nValor Total: %5.1f", dep + rend);
    
  getch();
}
