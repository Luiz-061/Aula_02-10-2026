#include <stdio.h>
int main(){
    int i, n, q;

    printf("Insira um numero para tabuada: ");
    scanf("%d", &n);
    printf("Insira ate onde vai a multiplicacao: ");
    scanf("%d", &q);


    for(i = 1; i <= q; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}