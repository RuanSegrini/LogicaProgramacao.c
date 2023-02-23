#include <stdio.h>
#include <string.h>

int main()
{

int x, soma;

printf("Digite um numero inteiro: ");
scanf("%d", &x);

soma = 0;


while (x != 0){


    scanf("%d", &x);
    soma = x + soma;

    printf("SOMA = %d", soma);
}


 return 0;
}