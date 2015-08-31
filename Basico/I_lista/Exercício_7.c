#include <stdio.h> 
#include <conio.h> 

int main()
{
    float p_nota, s_nota, p_1, p_2, mp, media;
    
    printf ("\nInforme Primeira Nota:  ");
    scanf ("%f", &p_nota);
    printf ("\nInforme Peso da Primeira Nota:  ");
    scanf ("%f", &p_1);
    
    printf ("\nInforme Segunda Nota:  ");
    scanf ("%f", &s_nota);
    printf ("\nInforme Pesp da Segunda Nota:  ");
    scanf ("%f", &p_2);
    
    mp = (p_nota * p_1 + s_nota * p_2)/10;
    printf ("\Sua Media Ponderada e:  %5.1f", mp);
    
    
        
  getch();
}
