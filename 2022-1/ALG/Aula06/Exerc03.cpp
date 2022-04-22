#include <stdio.h>
int main(){
    int num1, num2;
    printf("Digite o primeiro número\n");
    scanf("%d%*c",&num1);
    printf("Digite o segundo número\n");
    scanf("%d%*c",&num2);
    if (num1 > num2){
        printf("O maior número é:%d",num1);
    }else if (num2 > num1){
        printf("O maior número é:%d",num2);
    }else if (num1 == num2){
        printf("Os números são iguais");
    }
    return 0;
}