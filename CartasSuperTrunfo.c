#include <stdio.h>
#include <stdlib.h>

int main()
{
    // CARTA NUMERO 1
    int Carta1=1;
    char Codcarta1[3];
    char Cidade1[30];
    int Populacao1;
    int Turistico1;
    float Area1;
    float PIB1;

    //CARTA NUMERO 2
    int Carta2=2;
    char Codcarta2[3];
    char Cidade2[30];
    int Populacao2;
    int Turistico2;
    float Area2;
    float PIB2;

    //PERGUNTAS DA CARTA 1
    printf("Digite a UF do Estado da Carta: \n");
    scanf("%s", Codcarta1);

    printf("Digite a Cidade da sua Carta: \n");
    scanf(" %20[^\n]", Cidade1);

    printf("Digite a Populacao da Cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a quantidade de Pontos Turisticos da Cidade: \n");
    scanf("%d", &Turistico1);

    printf("Digite a Area (M2) da Cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);
    printf("\n\n");

    //PERGUNTAS DA CARTA 2
    printf("Digite a UF do Estado da Carta: \n");
    scanf("%s", Codcarta2);

    printf("Digite a Cidade da sua Carta: \n");
    scanf(" %20[^\n]", Cidade2);

    printf("Digite a Populacao da Cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a quantidade de Pontos Turisticos da Cidade: \n");
    scanf("%d", &Turistico2);

    printf("Digite a Area (M2) da Cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);
    printf("\n\n");

    //RESPOSTAS DA CARTA 1
    printf("RESPOSTAS DA CARTA 1\n");
    printf("Carta: %i\n", Carta1);
    printf("UF da Carta: %s\n", Codcarta1);
    printf("Codigo da Carta: %s%02d\n", Codcarta1, Carta1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %f km\n", Area1);
    printf("PIB do Estado: %f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", Turistico1);
    printf("\n\n");

    //RESPOSTAS DA CARTA 2
    printf("RESPOSTAS DA CARTA 2\n");
    printf("Carta: %i\n", Carta2);
    printf("UF da Carta: %s\n", Codcarta2);
    printf("Codigo da Carta: %s%02d\n", Codcarta2, Carta2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %f km\n", Area2);
    printf("PIB do Estado: %f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", Turistico2);

    return 0;
}
