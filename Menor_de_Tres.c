#include <stdio.h>
#include <string.h>

int main()
{

 int a, b, c;

printf("Primeiro valor: ");
scanf("%d", &a);
printf("Segundo valor: ");
scanf("%d", &b);
printf("Terceiro valor: ");
scanf("%d", &c);

if (a > c && b > c ){
    printf("MENOR = %d", c);
    
}
if (a > b && c > b){
    printf("MENOR = %d", b);
}
if (b > a && c > a){
    printf("MENOR = %d", a);
}
if(a == b && a ==c && b == c){
    printf("MENOR = %d", a);
}
if(a == b && c > a){
    printf("MENOR = %d", a);
}
if(a == c && b > a){
    printf("MENOR = %d", a);
}
if(b == c && c > a ){
    printf("MENOR = %d", b);
}


 return 0;
}