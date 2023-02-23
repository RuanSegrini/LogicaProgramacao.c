#include <stdio.h>
#include <string.h>

int main()
{

int minutos, conta; 
double valor;

printf("Digite a quantidade de minutos: ");
scanf("%d", &minutos);

conta = minutos - 100;

if (conta > 0 ){
    conta = conta * 2;
    valor = 50.00 + conta;
    printf("Valor a paga: R$%.2lf", valor);
}
else{
    printf("Valor a pagar R$50.00");
}

 return 0;
}
