#include <stdio.h>
#include <conio.h>

int main ()
{
    float p, i, n, m, lucro_bruto, iof, lucro_liq, perc_lucro;
    printf ("Informe o Valor da Aplicacão:  ");
    scanf ("%f", &p);
    printf ("Informe a Taxa de Juros Constante:  ");
    scanf ("%f", &i);
    printf ("Informe a Quantidade de Meses:  ");
    scanf ("%f", &n);
    m = p*pow(1+i/100,n);
    lucro_bruto = m-p;
    iof = lucro_bruto * 8/100;
    lucro_liq = lucro_bruto - iof;
    perc_lucro = lucro_liq/p*100;
    printf ("\nValor do termino da Aplicacão:  %5.1f", m);
    printf ("\nValor do Lucro:  %5.1f", lucro_bruto);
    printf ("\nPercentual de Lucro:  %5.1f", perc_lucro);
    getch ();
}
