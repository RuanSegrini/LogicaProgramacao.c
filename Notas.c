#include <stdio.h>
#include <string.h>

int main()
{

double Media, nota1, nota2;

printf("Digite a primeira nota: ");
scanf("%lf", &nota1);
printf("Digite a segunda nota: ");
scanf("%lf", &nota2);

Media = (nota1 + nota2);

printf("NOTA FINAL = %.1lf\n", Media);

if (Media < 60){
    printf("REPROVADO");
}
else{
    printf("APROVADO");
}
 return 0;
}