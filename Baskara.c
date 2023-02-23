#include <stdio.h>
#include <string.h>

int main()
{

double a, b, c, x1, x2, delta;

printf("Coeficiente a: ");
scanf("%lf", &a);
printf("Coeficiente b: ");
scanf("%lf", &b);
printf("Coeficiente c: ");
scanf("%lf", &c);

 delta = (b * b) - 4 * a * c;

if(delta < 0){
    printf("ESTA EQUACAO NAO POSSUI NUMEROS REAIS");
}
else{
x1 = (-(b)+ sqrt(delta)) / (2 * a);

x2 = (-(b)- sqrt(delta)) / (2 * a);

 printf("%.4lf\n %.4lf", x1, x2);

}


 return 0;
}