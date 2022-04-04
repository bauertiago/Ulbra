#include <stdio.h> //isso é uma biblioteca
/*
Muitas
Linhas 
eu coloco
asssim
*/
int main() {
    int alunoA=28;
    int alunoB=21;
    int alunoC=20;
    int media;
    printf("Digite a idade do aluno A\n");
    scanf("%d%*c",&alunoA);
    printf("Digite a idade do aluno B\n");
    scanf("%d%*c",&alunoB);
    printf("Digite a idade do aluno C\n");
    scanf("%d%*c",&alunoC);
    media=(alunoA+alunoB+alunoC)/3;
    printf("A media de idade é: %d",media);
    return 0;
}