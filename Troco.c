#include <stdio.h>
#include <string.h>

int main()
{

double preco, recebido, troco;
int quantidade;    

printf("Preço unitario do produto: ");
scanf("%lf", &preco);
printf("Quantidade comprada: ");
scanf("%d", &quantidade);
printf("Dinheiro recebido: ");
scanf("%lf", &recebido);

troco = recebido - (quantidade * preco);

printf("TROCO: %.2lf", troco);

 return 0;
}