#include <stdio.h>

int main(){
    char Estado;
    char Codigo[20];
    char Nome_da_cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;
    float Densidade_populacional;
    float PIB_per_Capita;

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

    printf("Qual e o PIB total: \n");
    scanf(" %f", &PIB);

    printf("Qual e o numero de pontos turisticos: \n" );
    scanf(" %d", &Numero_de_Pontos_Turisticos);
    
    Densidade_populacional =  Populacao / Area;
    PIB_per_Capita = (PIB * 1000000000.0) / Populacao;


    printf("A letra escolhida e: %c \n", Estado);
    printf("Aletra escolhida foi: %s \n", Codigo);
    printf("O nome da cidade e: %s \n", Nome_da_cidade);
    printf("O numero total da populaçao e : %d \n", Populacao);
    printf("A area total e: %.2f km² \n", Area);
    printf("O pib e: %.2f Bilhoes de reais \n", PIB );
    printf("A cidade tem %d pontos turisticos \n", Numero_de_Pontos_Turisticos);
    printf("A Densidade Populacional e : %.2f hab/km\n", Densidade_populacional);
    printf("O PIB per Capita e: %.2f reais \n", PIB_per_Capita);

    
    char Estado2;
    char Codigo2[20];
    char Nome_da_cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Numero_de_Pontos_Turisticos2;
    float Densidade_populacional2;
    float PIB_per_Capita2;


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

    printf("Qual e o PIB total: \n");
    scanf(" %f", &PIB2);

    printf("Qual e o numero de pontos turisticos: \n");
    scanf(" %d", &Numero_de_Pontos_Turisticos2);

    Densidade_populacional2 =  Populacao2 / Area2;
    PIB_per_Capita2 = (PIB2 * 1000000000.0) / Populacao2;

    printf("A letra escolhida e: %c \n", Estado2);
    printf("Aletra escolhida foi: %s \n", Codigo2);
    printf("O nome da cidade e: %s \n", Nome_da_cidade2);
    printf("O numero total da populaçao e : %d \n", Populacao2);
    printf("A area total e: %.2f km² \n", Area2);
    printf("O pib e: %.2f \n", PIB2 );
    printf("A cidade tem %d , pontos turisticos \n", Numero_de_Pontos_Turisticos2);
    printf("A Densidade Populacional e : %.2f hab/km² \n", Densidade_populacional2);
    printf("O PIB per Capita e: %.2f reais \n", PIB_per_Capita2);

    

    }





