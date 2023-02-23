#include <stdio.h>
#include <string.h>

int main()
{

int codigo, quantidade;
double pagar;

printf("Codigo do produto comprado: ");
scanf("%d", &codigo);



if(codigo == 1){
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    pagar = quantidade * 5.00;
    printf("Valor a pagar: R$%.2lf", pagar);


}
if(codigo == 2){
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    pagar = quantidade * 3.50;
    printf("Valor a pagar: R$%.2lf", pagar);


}
if(codigo == 3){
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    pagar = quantidade * 4.80;
    printf("Valor a pagar: R$%.2lf", pagar);


}
if(codigo == 4){
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    pagar = quantidade * 8.90;
    printf("Valor a pagar: R$%.2lf", pagar);


}
if(codigo == 5){
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    pagar = quantidade * 7.32;
    printf("Valor a pagar: R$%.2lf", pagar);


}


 return 0;
}