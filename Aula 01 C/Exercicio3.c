#include <stdio.h>

int main(){
    float nota, soma = 0, media;

    printf("Vamos calcular a sua media\n");

    for (int i = 1; i<=3; i++){
        do{
            printf("Digite a nota da sua prova %d: ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota> 10){
                printf("Nota invalida, digite um valor de 0 a 10\n");
            }
        }while (nota <0 || nota >10);     

        soma+=nota;
    }
    media = soma/3;
    
    printf("sua media eh: %.2f\n", media);

    return 0;
}
