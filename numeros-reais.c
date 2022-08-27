/* Faça um programa que Linguagem C que leia 2 números reais (float) da entrada padrão e que apresente a média aritmética desses dois números na saída,
com 2 casas decimais. Veja os exemplos abaixo. */

#include<stdio.h>

int main(){

float i1,i2;
float media;

scanf("%f%f",&i1,&i2);
media = (i1+i2)/2;
printf("Media = %.2f\n ", media);

return 0;

}
