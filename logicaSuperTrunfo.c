#include <stdio.h>
#include <string.h>

int main() {

    char estado1[3], cidade1[60], codigo1[7];
    int populacao1, nPontosTuristicos1;
    float area1, densidadePopulacional1, pibPerCapita1, superPoder1;

    char estado2[3], cidade2[60], codigo2[7];
    int populacao2, nPontosTuristicos2;
    float area2, densidadePopulacional2, pibPerCapita2, superPoder2;

    double pib1, pib2;

    int codigo = 1;
    // Dados para a primeira carta
    printf("\nCadastre as informacoes para a primeira carta:\n-------------------------------------\n\n");

    printf("Digite o nome da cidade (Carta 1): ");
    scanf(" %[^\n]s", cidade1);

    printf("Digite a sigla do Estado (Carta 1): ");
    scanf(" %2s", estado1);

    snprintf(codigo1, sizeof(codigo1), "%2s%02d", estado1, codigo);

    printf("Digite a populacao da cidade (Carta 1): ");
    scanf(" %d", &populacao1);

    printf("Digite a area da cidade em Km2 (Carta 1): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade (Carta 1): ");
    scanf(" %lf", &pib1);

    printf("Digite o numero de pontos turisticos (Carta 1): ");
    scanf(" %d", &nPontosTuristicos1);

    // Calculo da Densidade populacional e PIB per Capita da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calculo do Super Poder da primeira carta
    superPoder1 = pib1 + area1 + populacao1 + nPontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
 
    printf("\n\nCadastre as informacoes para a segunda carta:\n-------------------------------------\n\n");

    printf("Digite o nome da cidade (Carta 2): ");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a sigla do Estado (Carta 2): ");
    scanf(" %2s", estado2);

    if (strcmp(estado2, estado1) == 0) {
        codigo += 1;
    }

    snprintf(codigo2, sizeof(codigo2), "%2s%02d", estado2, codigo);

    printf("Digite a populacao da cidade (Carta 2): ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade em Km2 (Carta 2): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (Carta 2): ");
    scanf(" %lf", &pib2);

    printf("Digite o numero de pontos turisticos (Carta 2): ");
    scanf(" %d", &nPontosTuristicos2);

    // Calculo da Densidade populacional e PIB per Capita da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calculo do Super Poder da segunda carta
    superPoder2 = pib2 + area2 + populacao2 + nPontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibicao dos dados da primeira carta
    printf("\n\nCarta 1:\n-------------------------------\n");
    printf("Codigo................: %s\n", codigo1);
    printf("Estado................: %s\n", estado1);
    printf("Cidade................: %s\n", cidade1);
    printf("Populacao.............: %d\n", populacao1);
    printf("Area..................: %.2f Km2\n", area1);
    printf("PIB...................: R$ %.2lf\n", pib1);
    printf("Pontos turisticos.....: %d\n", nPontosTuristicos1);
    printf("Densidade populacional: %.2f hab./km2\n", densidadePopulacional1);
    printf("PIB per capita........: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder...........: %.2f\n", superPoder1);

    // Exibicao dos dados da segunda carta
    printf("\n\nCarta 2:\n-------------------------------\n");
    printf("Codigo................: %s\n", codigo2);
    printf("Estado................: %s\n", estado2);
    printf("Cidade................: %s\n", cidade2);
    printf("Populacao.............: %d\n", populacao2);
    printf("Area..................: %.2f Km2\n", area2);
    printf("PIB...................: R$ %.2lf\n", pib2);
    printf("Pontos turisticos.....: %d\n", nPontosTuristicos2);
    printf("Densidade populacional: %.2f hab./km2\n", densidadePopulacional2);
    printf("PIB per capita........: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder...........: %.2f\n", superPoder2);

    // Exibição do atributo Super Poder
    printf("\n\nComparacao do atributo Super Poder:\n-------------------------------------\n");
    printf("%s (%s): %.2f\n", cidade1, estado1, superPoder1);
    printf("%s (%s): %.2f\n", cidade2, estado2, superPoder2);
    printf("\nResultado: ");
    
    // Comparação do atributo
    if (superPoder1 > superPoder2) {
        printf("A carta 1 e a vencedora!\n");
    } else if (superPoder1 < superPoder2) {
        printf("A carta 2 e a vencedora!\n");
    } else {
        printf("Empate!\n");
    }

    // Pausa no final
    printf("\n\nPressione ENTER para finalizar...");
    getchar();
    getchar();

    return 0;
}