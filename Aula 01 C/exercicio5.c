#include <stdio.h>
#include <locale.h>

float calculo(float salario, float dolar){
    double Totalelon = 10000000.0;
    double reais = Totalelon * dolar;
    float custo_casa = 150 * salario;

    int quantidade = (int)(reais / custo_casa);

    return quantidade;
}
int main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioM, dolarD;
    int resultado;

    printf("Vamos calcular o número de casas possiveis de comprar com a doação de elon, lembre-se que uma casa custa 150 SM\n");

    do{
        printf("Digite o valor do salario minimo, caso não seja um valor inteiro use . para separar\n");
        scanf("%f", &salarioM);
        if (salarioM <= 0){
            printf("Valor invalido, deve ser maior que 0");
        }
    }while (salarioM <= 0);

    do{
        printf("Digite o valor do dolar, caso não seja um numero inteiro use . para separar\n");
        scanf("%f", &dolarD);
        if (dolarD <= 0){
            printf("Valor invalido, deve ser maior que 0");
        }
    }while (dolarD <= 0);

    resultado = calculo(salarioM, dolarD);

    printf("Com a doação de 10 milhões de dolares, considerando o preço atual do dolar e o salario minimo, é possivel comprar %d casas \n", resultado);

    return 0;
}