#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,soma;    
    printf("Digite n1\n");
    scanf("%d%*c", &n1);
    printf("Digite n2\n");
    scanf("%d%*c", &n2);
    printf("Digite n3\n");
    scanf("%d%*c", &n3);
    printf("Digite n4\n");
    scanf("%d%*c", &n4);
    soma = n1 + n2 + n3 + n4;
    printf("o resultado é: %d", soma);
    return 0;
}