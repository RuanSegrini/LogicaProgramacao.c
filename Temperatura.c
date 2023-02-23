#include <stdio.h>
#include <string.h>

int main()
{

char escala;
double Cel,Fahr;
int F, C;

printf("Voce vai digitar a temperatura em qual escala (C/F) ?");
scanf("%c", &escala);

C = 9 + escala;
F = 8 + escala;

printf("%d", C);


if(escala == 8){
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &Cel);
}

if(escala == 9){
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &Fahr);
}



 return 0;
}