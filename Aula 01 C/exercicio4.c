#include <stdio.h>

int main(){
    double largura, comprimento, area;

    printf("Vamos calcular a area de um terreno retangular para uma imobiliaria \n");

    printf("Digite a largura do terreno: \n");
    scanf("%lf", &largura);

    if (largura <= 0){
        printf("Largura invalida, ela deve ser maior que 0\n");
    }

    printf("Digite o comprimento do terreno: \n");
    scanf("%lf", &comprimento);

    if (comprimento <= 0){
        printf("comprimento invalido, ele deve ser maior que 0\n");
    }
    area = largura * comprimento;

    printf("A area do terreno eh: %.2lf metros quadrados\n", area);

    return 0;
}