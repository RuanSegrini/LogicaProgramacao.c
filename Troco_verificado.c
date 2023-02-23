#include <stdio.h>
#include <string.h>

int main()
{

double recebido, preco, quantidade, total, falta, troco;

printf("Preco unitario do produto: ");
scanf("%lf", &preco);
printf("Quantidade comprada: ");
scanf("%lf", &quantidade);
printf("Dinheiro recebido: ");
scanf("%lf", &recebido);

total = preco * quantidade;


if (total > recebido){
    falta = total - recebido;
    printf("Dinheiro insuficiente.Faltam %.2lf reais", falta);
}
if(recebido > total){
    troco = recebido - total;
    printf("TROCO = %.2lf", troco);
}

 return 0;
}
