#include <stdio.h>
#include <string.h>

int main()
{

double a, b, c;

printf("Digite as tres distancias: ");
scanf("%lf\n %lf\n %lf", &a, &b, &c);

if (a < c && b < c ){
    printf("MAIOR = %.2lf", c);
    
}
if (a < b && c < b){
    printf("MAIOR = %.2lf", b);
}
if (b < a && c < a){
    printf("MAIOR = %.2lf", a);
}
if(a == b && a ==c && b == c){
    printf("MAIOR = %.2lf", a);
}
if(a == b && c < a){
    printf("MAIOR = %.2lf", a);
}
if(a == c && b < a){
    printf("MAIOR = %.2lf", a);
}
if(b == c && c < a ){
    printf("MAIOR = %.2lf", b);
}


 return 0;
}
