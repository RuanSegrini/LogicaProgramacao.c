#include <stdio.h>
#include <string.h>

int main()
{

int codigo, codigo1, codigo2, codigo3, codigo4;

printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
scanf("%d", &codigo);

codigo1 = 0;
codigo2 = 0;
codigo3 = 0;


if (codigo == 1){
    codigo1 = 0 + 1;
}
if (codigo == 2){
    codigo2 = 0 + 1;
}
if (codigo == 3){
    codigo3 = 0 + 1;
}


while(codigo != 4){
    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);
    
if (codigo == 1){
    codigo1 = codigo1 + 1;
}
if (codigo == 2){
    codigo2 = codigo2 + 1;
}
if (codigo == 3){
    codigo3 = codigo3 + 1;
}

}
printf("Alcool: %d\n", codigo1);
printf("Gasolina: %d\n", codigo2);
printf("Diesel: %d\n", codigo3);


 return 0;
}