#include <stdio.h>
#include <string.h>


int main()
{

double salario, aumento, novosalario, porcentagem;




printf("Digite o salario da pessoa: ");
scanf("%lf", &salario);


if(salario <= 1000){
   porcentagem = (20 * salario) / 100;
   novosalario = porcentagem + salario;
   printf("Aumento = R$%.2lf ", porcentagem);
   printf("Novo salario = R$%.2lf", novosalario);
}

if(salario > 1000 && salario <= 3000){
   porcentagem = (15 * salario) / 100;
   novosalario = porcentagem + salario;

   printf("Aumento = R$%.2lf\n", porcentagem);
   printf("Novo salario = R$%.2lf\n", novosalario);
   printf("Pocentagem: 15%%");
}
if(salario > 3000 && salario <= 8000){
   porcentagem = (10 * salario) / 100;
   novosalario = porcentagem + salario;

   printf("Aumento = R$%.2lf\n", porcentagem);
   printf("Novo salario = R$%.2lf\n", novosalario);
   printf("Pocentagem: 10%%");
}

if(salario > 8000){
   porcentagem = (5 * salario) / 100;
   novosalario = porcentagem + salario;

   printf("Aumento = R$%.2lf\n", porcentagem);
   printf("Novo salario = R$%.2lf\n", novosalario);
   printf("Pocentagem: 5%%");
}



 return 0;
}