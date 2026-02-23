#include <stdio.h>
#include <locale.h>

int multiplo5(int n){
    if (n % 5 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um valor inteiro, vamos ver se ele é multiplo de 5\n");
    scanf("%d", &numero);

    if (multiplo5(numero)){
        printf("O numero é múltiplo de 5 \n",numero);
    }else{
        printf("O número não é múltiplo de 5 \n", numero);
    }
    return 0;
}