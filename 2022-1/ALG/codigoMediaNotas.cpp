#include <stdio.h> //isso é uma biblioteca
/*
Muitas
Linhas 
eu coloco
asssim
*/
int main() {
    float ap1,ap2,as,media;
    printf("Digite ap1\n");
    scanf("%f%*c",&ap1);
    printf("Digite ap2\n");
    scanf("%f%*c",&ap2);
    printf("Digite as\n");
    scanf("%f%*c",&as);
    media=ap1+ap2+as;
    printf("Media é:%.5f - AP1=%.0f - AP2=%.3f - AS=%.1f",media,ap1,ap2,as);
    return 0;
}