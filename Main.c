#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    //Variavel para guardar palavra
    char palavra[50];
    char palavra_imp[50];
    char dica[50];
    int chances = 6;
    int acertou = 0;
    char letra;
    int tam_palavra, p_acerto = 0;

    //Pegar palavra do teclado
    printf("Digite a Palavra: ");
    fflush(stdin);
    fgets(palavra, 50, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    printf("Digite a dica da palavra: ");
    fflush(stdin);
    fgets(dica, 50, stdin);
    dica[strlen(dica) - 1] = '\0';

    //Para "limpar" a tela
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    system("clear"); //system("cls") é utilizado para o windows

    int i;
    for(i = 0;i < strlen(palavra);i++){
        palavra_imp[i] = '_';
    }

    tam_palavra = i;

    palavra_imp[i] = '\0';

    do{
        system("clear");

        printf("Palavra: %s\n", palavra_imp);
        printf("Dica: %s\n", dica);
        printf("Chances: %d\n", chances);
        printf("Digite uma letra: ");

        fflush(stdin);
        scanf(" %c", &letra);

        for(i = 0;i < strlen(palavra);i++){

            if(letra == palavra[i]){
                palavra_imp[i] = letra;
                acertou = 1;
                p_acerto++;
            }

        }

        if(!acertou){
            chances--;
        }

        acertou = 0;

    }while(chances > 0 && p_acerto < tam_palavra);

    if(chances <= 0){
        printf("Voce perdeu :( , a palavra era: %s\n", palavra);
    }else{
        printf("Voce Ganhou !!!! :) , a palavra era: %s\n", palavra);
    }

    return 0;
}
