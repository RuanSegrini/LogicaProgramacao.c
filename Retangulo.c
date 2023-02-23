#include <stdio.h>
#include <string.h>

int main()
{

double base, altura, perimetro, area, diagonal;

printf("Base do retangulo = ");
scanf("%lf", &base);
printf("Altura do retangulo = ");
scanf("%lf", &altura);

area = base * altura;
perimetro = 2 * (base + altura);
diagonal = sqrt((base * base) + (altura * altura));

printf("Area = %.4lf\n", area);
printf("Perimetro = %.4lf\n", perimetro);
printf("Diagonal = %.4lf\n", diagonal);

 return 0;
}