#include <stdio.h>
int main()
{
    // CARTA 1
    char estado_1, codigo_carta_1[20], nome_cidade_1[20];
    float area_1, pib_1, densidade_populacional_1, pib_per_capita_1;
    int populacao_1, numero_pontos_turisticos_1;

    // CARTA 2
    char estado_2, codigo_carta_2[20], nome_cidade_2[20];
    float area_2, pib_2, densidade_populacional_2, pib_per_capita_2;
    int populacao_2, numero_pontos_turisticos_2;

    printf("Digite o Estado 1: \n");
    scanf(" %c", &estado_1);
    printf("Digite o Código da Carta 1: \n");
    scanf("%s", codigo_carta_1);
    printf("Digite o Nome da Cidade 1:\n");
    scanf("%s", nome_cidade_1);
    printf("Digite a População 1: \n");
    scanf("%d", &populacao_1);
    printf("Digite a Área (em km²) 1: \n");
    scanf("%f", &area_1);
    printf("Digite o PIB 1: \n");
    scanf("%f", &pib_1);
    printf("Digite o Número de Pontos Turísticos 1: \n");
    scanf("%d", &numero_pontos_turisticos_1);

    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;

    printf("Digite o Estado 2: \n");
    scanf(" %c", &estado_2);
    printf("Digite o Código da Carta 2: \n");
    scanf("%s", codigo_carta_2);
    printf("Digite o Nome da Cidade 2:\n");
    scanf("%s", nome_cidade_2);
    printf("Digite a População 2: \n");
    scanf("%d", &populacao_2);
    printf("Digite a Área (em km²) 2: \n");
    scanf("%f", &area_2);
    printf("Digite o PIB 2: \n");
    scanf("%f", &pib_2);
    printf("Digite o Número de Pontos Turístico 2: \n");
    scanf("%d", &numero_pontos_turisticos_2);

    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado_1);
    printf("Código da Carta: %s \n", codigo_carta_1);
    printf("Nome da Cidade: %s \n", nome_cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f KM² \n", area_1);
    printf("PIB: %.2f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado_2);
    printf("Código da Carta: %s \n", codigo_carta_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f KM² \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_2);

    return 0;
}
