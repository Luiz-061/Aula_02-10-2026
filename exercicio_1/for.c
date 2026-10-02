#include <stdio.h>

int main(){
    int i, dez;
    for(i = 1; i <= 100; i++){
        printf("%d ", i);
       
        if(i % 10 == 0){
            printf("\n", i);
        }
    }
    

}