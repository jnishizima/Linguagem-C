#include <stdio.h> 
#include <conio.h> 

int main()
{
    float anos, mes, dia, hor, min ;
    printf ("Informe Sua Idade em Anos:  ");
    scanf ("%f", & anos);
    mes = anos*12;
    dia = anos * 365;
    hor = dia*24;
    min = hor*60;
    printf ("\nSua Idade em Messes: %5.1f", mes);
    printf ("\nSua Idade em Dias:  %5.1f", dia);
    printf ("\nSua Idade em Horas:  %5.1f", hor);
    printf ("\nSua Idade em Munutos:  %5.1f",min);
    
 
  getch();
}
