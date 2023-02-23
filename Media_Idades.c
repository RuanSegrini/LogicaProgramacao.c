#include <stdio.h>
int main() {
 
int x, y, divisao;
double medida, Media;

printf("Digite as idades: ");
scanf("%d", &x);

divisao = 0 + 1;
medida = x + 0;

if(x < 0){
    printf("IMPOSSIVEL CALCULAR!");
}
else{
while (y > 0){
    scanf("%d", &y);
    
    if(y > 0){
         medida = medida + y;
         divisao = divisao + 1;
    }    
}
 Media = medida / divisao;
        printf("Media = %.2lf", Media );
}
      


 return 0; 
} 
