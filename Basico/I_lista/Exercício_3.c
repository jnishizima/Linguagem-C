#include <stdio.h> 
#include <conio.h> 

int main()
{
    int numerador, denominador, resto;
    
    printf ("Informe o Numerador:  ");
    scanf ("%d", &numerador);
    printf ("Informe o Denominador: ");
    scanf ("%d", &denominador);
    resto = numerador%denominador;
    printf (" O Resto da Divisão e: %d ", resto);
    
  getch();
}
