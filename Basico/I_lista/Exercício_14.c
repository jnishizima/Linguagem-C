#include <stdio.h>
#include <conio.h>

int main ()
{
    float a_n, a_a, idade;
    
    printf ("Informe seu Ano em de nascimento:  ");
    scanf ("%f", &a_n);
    printf ("Informe o ano de Atual:  ");
    scanf ("%f", &a_a);
    idade = a_a - a_n;
    printf ("\nSua Idade em Anos:  %5.1f", idade);
    idade = idade * 365/7;
    printf ("\nSua Idade em Semanas:  %5.1f", idade);
    
    getch();
}
