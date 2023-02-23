#include <stdio.h>
#include <string.h>

int main()
{

double valor, pagamento;
char nome[50];
int horas;

printf("Nome: ");
gets(&nome);
printf("Valor por hora: ");
scanf("%lf", &valor);
printf("Horas trabalhadas: ");
scanf("%d", &horas);

pagamento = valor * horas;

printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

 return 0;
}