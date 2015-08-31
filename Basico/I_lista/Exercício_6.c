#include <stdio.h> 
#include <conio.h> 

int main()
{
    int f, c;
    
    printf ("Digite um Valor en Graus Fahrenheit:  ");
    scanf ("%d", &f);
    c=((f-32)*5)/9;
    printf("O Valor de Graus em Celsius e : %5.1d", c);
    
  getch();
}
