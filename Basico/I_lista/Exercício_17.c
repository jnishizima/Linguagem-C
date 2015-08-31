#include <stdio.h>
#include <conio.h>

int main ()
{
    float h_s, h_e,salario;
    printf ("Informe o Valor de Horas de Trabalhos da Semana:  ");
    scanf ("%f", &h_s);
    h_e = h_s - 44;
    salario = 44*20 + h_e * 20 * 50 /100 + 20;
    printf ("Seu Salario e:  %5.1f", salario);
    getch();
}
