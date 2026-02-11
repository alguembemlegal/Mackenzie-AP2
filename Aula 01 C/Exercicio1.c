#include <stdio.h>

int main (){
    
    float salarioM = 1621, salarioB;
    
    printf("Vamos calcular quantos salarios minimos voce recebe, digite o valor do seu salario bruto: \n");
    scanf("%f", &salarioB);

    double Salario = salarioM/salarioB;
    
    printf("Voce recebe %.2d salarios minimos", &Salario);

    return 0;
}