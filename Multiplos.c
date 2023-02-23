#include <stdio.h>
#include <string.h>

int main()
{

int a, b;

printf("Digite dois numeros inteiros: ");
scanf("%d %d", &a, &b);

if(a > b ){
    if(a % b == 0){
        printf("Sao Multiplos");
        
    }
    else{
        printf("Nao sao mutiplos");
    }
}
if(a < b ){
    if(b % a == 0){
        printf("Sao Multiplos");
        
    }
    else{
        printf("Nao sao mutiplos");
    }
}
if(a == b ){
   printf("Sao Multiplos"); 
}

 return 0;
}