#include <stdio.h>

int main(){
    int hora, minuto, segundo;

    printf("Digite que horas sao no formato 24h Hora:minutos:segundos: \n");

    if (scanf("%d:%d:%d", &hora, &minuto, &segundo) !=3){
        printf("Formato invalido, digite HH:MM:SS\n");
        return 1;
    }

    if(hora < 0 || hora > 23 || minuto < 0 || minuto > 59 || segundo < 0 || segundo > 59){
        printf ("Horario invalido, certifique-se de que digitou no formato 24H (00:00 - 23:59\n");
        
        return 1;
    }
        else{
          int minutosPassados = hora * 60 + minuto;
          printf("Passaram-se %d minutos e %d segundos desde o inicio do dia.\n", minutosPassados, segundo);
        }
        return 0;
    }