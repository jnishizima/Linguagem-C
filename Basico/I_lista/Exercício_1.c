#include <stdio.h> 
#include <conio.h> 

int main()
{
    float p_nota, s_nota, t_nota, media;
    
    printf ("\nInforme Primeira Nota:  ");
    scanf ("%f", &p_nota); // inserindo a primeira nota
    printf ("\nInforme Segunda Nota:  ");
    scanf ("%f", &s_nota); // inserindo a segunda nota
    printf ("\nInforme Terceira Nota:  ");
    scanf ("%f", &t_nota); // inserindo a terceira nota
    media = (p_nota + s_nota + t_nota) / 3; // calculando a media das notas inseridas anteriormente
    
    if(media >= 7)  
      printf ("\nAprovado");
    else
      printf ("\nReprovado");
        
  getch();
}
