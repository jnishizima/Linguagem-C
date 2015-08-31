#include <stdio.h>
#include <conio.h>

int main ()
{
    float p_k, p_g;
    
    printf ("Informe o seu Peso em Kilos:  ");
    scanf ("%f", &p_k);
    p_g = p_k * 100;
    printf ("\nSeu pesso em Gramas:  %5.1f", p_g);
    p_g = p_g*5/100 + p_g;
    printf ("\nSe Engordar 5 por cento seu peso em gramas sera:  %5.1f", p_g );
    
    getch ();
}
