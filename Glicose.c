#include <stdio.h>
#include <string.h>

int main()
{
double glicose;

printf("Digite a medida da glicose: ");
scanf("%lf", &glicose);

if(glicose <= 100){
    printf("Clasificacao: NORMAL");
}
if(glicose > 140){
    printf("Classificacao: DIAETES");   
}
if(glicose <= 140 && glicose > 100){
    printf("Classificacao: ELEVADO");
}

 return 0;
}
