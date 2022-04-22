#include <stdio.h>
int main(){
    int num;
    printf("digite um número\n");
    scanf("%d%*c", &num);
    if(num % 2 == 0){
        printf("É um número par!");
    }else{
        printf("É um número impar!");
    }
}