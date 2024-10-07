#include <stdio.h>
#include <stdlib.h>
/*
Escreva um procedimento que recebe por parâmetro 3 valores reais X, Y e Z e que verifique
se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual
é o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do
que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de
triângulo formado observando as seguintes definições:
1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;
Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para
cada triângulo, acione o procedimento
*/

void triangulo (float lado1, float lado2, float lado3){

     printf("Digite o lado 1 do triangulo: ");
     scanf("%f", &lado1);
     printf("Digite o lado 2 do triangulo: ");
     scanf("%f", &lado2);
     printf("Digite o lado 3 do triangulo: ");
     scanf("%f", &lado3);

     if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)){
        if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
            printf("Esse eh um triangulo equilatero\n");
         }
         if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)){
            printf("Esse eh um triangulo isosceles\n");
         }
         if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
            printf("Esse eh um triangulo escaleno\n");
         }
     }
     else{
        printf("Com esses lados nao tem como formar um triangulo\n");
     }
}

int main()
{
    int x, y, z;
    int quantidade_triangulos;

    printf("Digite quantos triangulos voce quer escolher: ");
    scanf("%d", &quantidade_triangulos);

    for(int i = 1; i <= quantidade_triangulos; i++){
        printf("Triangulo %d\n", i);
        triangulo(x, y, z);
    }
}
