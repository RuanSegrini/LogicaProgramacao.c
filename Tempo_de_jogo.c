#include <stdio.h>
#include <string.h>

int main()
{

int inicial, final, fuso, tempo;

printf("Hora inicial: ");
scanf("%d", &inicial);
printf("Hora final: ");
scanf("%d", &final);

fuso = inicial - final;

if(fuso > 0){
    tempo = 24 - fuso;
    printf("O jogo durou %d hora(s) ", tempo);
}
if(fuso < 0){
    tempo =  - fuso;
    printf("O jogo durou %d hora(s) ", tempo);
}
else{
    tempo = 24 + fuso;
    printf("O jogo durou %d hora(s) ", tempo);
}

 return 0;
}