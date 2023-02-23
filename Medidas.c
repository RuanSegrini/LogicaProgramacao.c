#include <stdio.h>
#include <string.h>

int main()
{
    
double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

printf("Digite a medida de A: ");
scanf("%lf", &A);
printf("Digite a medida de B: ");
scanf("%lf", &B);
printf("Digite a medida de C: ");
scanf("%lf", &C);

areaQuadrado = pow(A,2);
areaTriangulo = (A * B) / 2;
areaTrapezio = 0.5 * C * (A + B);

printf("Area Quadrado: %.4lf\n", areaQuadrado);
printf("Area Triangulo: %.4lf\n", areaTriangulo);
printf("Area Trapezio: %.4lf", areaTrapezio);


 return 0;
}