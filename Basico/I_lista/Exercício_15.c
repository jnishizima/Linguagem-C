#include <stdio.h>
#include <conio.h>

int main ()
{
    float p_compra, p_venda, lucro, p_lucro;
    
    printf ("Informe o Preco de Compra do Produto:  ");
    scanf ("%f", &p_compra);
    printf ("Informe o Preco de Venda do Produto:  ");
    scanf ("%f", &p_venda);
    
    lucro = p_venda - p_compra;
    p_lucro = lucro / (p_compra / 100);
    
    printf ("\nO percentual de lucro e:  %5.1f", p_lucro);
    printf ("\nO lucro em Reais foi de:  %5.1f", lucro);
    
    getch();
}
