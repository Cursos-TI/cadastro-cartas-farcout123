#include <stdio.h>

int main(){
    char Estado;
    char Codigo[20];
    char Nome_da_cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;

    printf("Uma letra de A a H: \n" );
    scanf(" %c", &Estado);

    printf("A letra do estado seguida de 01 a 04: \n");
    scanf(" %s", Codigo);

    printf("Escreva um nome de cidade: \n");
    scanf(" %s", Nome_da_cidade);

    printf("Escreva o numero total da populaçao: \n");
    scanf(" %d", &Populacao);
    

    printf("Escreva a area: \n");
    scanf(" %f", &Area);

    printf("Qual e area total: \n");
    scanf(" %f", &PIB);

    printf("Qual e o numero de pontos turisticos:");
    scanf(" %d", &Numero_de_Pontos_Turisticos);

    printf("A letra escolhida e: %c \n", Estado);
    printf("Aletra escolhida foi: %s \n", Codigo);
    printf("O nome da cidade e: %s", Nome_da_cidade);
    printf("O numero total da populaçao e : %d \n", Populacao);
    printf("A area total e: %f \n", Area);
    printf("O pib e: %f \n", PIB );
    printf("A cidade tem %d , pontos turisticos \n", Numero_de_Pontos_Turisticos);
    
    char Estado2;
    char Codigo2[20];
    char Nome_da_cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Numero_de_Pontos_Turisticos2;

    printf("Uma letra de A a H: \n" );
    scanf(" %c", &Estado2);

    printf("A letra do estado seguida de 01 a 04: \n");
    scanf(" %s", Codigo2);

    printf("Escreva um nome de cidade: \n");
    scanf(" %s", Nome_da_cidade2);

    printf("Escreva o numero total da populaçao: \n");
    scanf(" %d", &Populacao2);
    

    printf("Escreva a area: \n");
    scanf(" %f", &Area2);

    printf("Qual e area total: \n");
    scanf(" %f", &PIB2);

    printf("Qual e o numero de pontos turisticos:");
    scanf(" %d", &Numero_de_Pontos_Turisticos2);

    printf("A letra escolhida e: %c \n", Estado2);
    printf("Aletra escolhida foi: %s \n", Codigo2);
    printf("O nome da cidade e: %s", Nome_da_cidade2);
    printf("O numero total da populaçao e : %d \n", Populacao2);
    printf("A area total e: %f \n", Area2);
    printf("O pib e: %f \n", PIB2 );
    printf("A cidade tem %d , pontos turisticos \n", Numero_de_Pontos_Turisticos2);

    return 0;

    }