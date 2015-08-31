#include <stdio.h>
#include <conio.h>

int main ()
{
    float s_min, quil, v_quil, v_pag, nov_v;
    
    printf ("Informe o Valor do Salario Minimo:  ");
    scanf ("%f", &s_min);
    printf ("Informe a Quantidade de Quilowat Gasto:  ");
    scanf ("%f", &quil);
    v_quil = s_min/5/quil;
    v_pag = v_quil * quil;
    nov_v = v_pag - v_pag*15/100;
    
    printf ("\nO Valor de Cada Quilowate e:  %5.1f", v_quil);
    printf ("\nO valor a ser Pago e:  %5.1f", v_pag);
    printf ("\nO Novo Valor com Desconto e:  %5.1f", nov_v);

    getch();
}
