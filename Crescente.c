#include <stdio.h>
int main() 
{ 
 int x, y;


  
 printf("Digite dois numeros: "); 
 scanf("%d %d", &x, &y); 

 if(x > y){
    printf("DECRESCENTE\n");
}
if(x < y){
    printf("CRESCENTE\n");
}
 while (x != y) { 
 
 printf("Digite outro numero: "); 
 scanf("%d %d", &x, &y); 

 if(x > y){
    printf("DECRESCENTE\n");
}
if(x < y){
    printf("CRESCENTE\n");
}


 }
 


 return 0; 
} 
