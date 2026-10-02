// Leia 10
#include <stdio.h>
int main(){
    int i, n, neg = 0, posit = 0, zeros = 0, max;

    

    for(i = 1; i <= 10; i++){
        printf("Numero aleatorio %d de 10: ", i);
        scanf("%d", &n);
       if(n == 0){
        zeros++;
       }else if(n > 0){
        posit++;
       }else{
        neg++;
       }
      if(i == 1 || n > max){
        max = n;
      }
    }
    printf("Negativos: %d\n", neg);
    printf("Positivos: %d\n", posit);
    printf("Zeros: %d\n", zeros);
    printf("Maior numero digitado: %d", max);
    return 0;
}