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
    int opcao, codigo = 1;

    // Cidade 1
    strcpy(estado1, "SP");
    strcpy(cidade1, "Sao Paulo");
    snprintf(codigo1, sizeof(codigo1), "%2s%02d", estado1, codigo);
    pib1 = 700000000000.00;
    populacao1 = 12300000;
    nPontosTuristicos1 = 15;
    area1 = 1521.11;

    // Calculo da Densidade populacional e PIB per Capita da primeira carta
    densidadePopulacional1 = (float)populacao1 / (float)area1;
    pibPerCapita1 = (float)pib1 / (float)populacao1;

    // Calculo do Super Poder da primeira carta
    superPoder1 = (float)pib1 + (float)area1 + (float)populacao1 + (float)nPontosTuristicos1 + (float)pibPerCapita1 + (1.0f / (float)densidadePopulacional1);

    // Cidade 2
    strcpy(estado2, "RJ");
    strcpy(cidade2, "Rio de Janeiro");
    pib2 = 300000000000.00;
    populacao2 = 6748000;
    nPontosTuristicos2 = 20;
    area2 = 1182.30;

    if (strcmp(estado2, estado1) == 0) {
        codigo += 1;
    }

    snprintf(codigo2, sizeof(codigo2), "%2s%02d", estado2, codigo);

    // Calculo da Densidade populacional e PIB per Capita da segunda carta
    densidadePopulacional2 = (float)populacao2 / (float)area2;
    pibPerCapita2 = (float)pib2 / (float)populacao2;

    // Calculo do Super Poder da segunda carta
    superPoder2 = (float)pib2 + (float)area2 + (float)populacao2 + (float)nPontosTuristicos2 + (float)pibPerCapita2 + (1.0f / (float)densidadePopulacional2);
    
    // Exibicao dos dados da primeira carta
    printf("\n\nCarta 1:\n-------------------------------\n");
    printf("Codigo................: %s\n", codigo1); 
    printf("Estado................: %s\n", estado1);
    printf("Cidade................: %s\n", cidade1);
    printf("Populacao.............: %d\n", (int)populacao1);
    printf("Area..................: %.2f Km2\n", (float)area1); 
    printf("PIB...................: R$ %.2lf\n", (double)pib1);
    printf("Pontos turisticos.....: %d\n", (int)nPontosTuristicos1);
    printf("Densidade populacional: %.2f hab./km2\n", (float)densidadePopulacional1);
    printf("PIB per capita........: R$ %.2f\n", (float)pibPerCapita1);
    printf("Super Poder...........: %.2f\n", (float)superPoder1); 

    // Exibicao dos dados da segunda carta
    printf("\n\nCarta 2:\n-------------------------------\n");
    printf("Codigo................: %s\n", codigo2); 
    printf("Estado................: %s\n", estado2);
    printf("Cidade................: %s\n", cidade2); 
    printf("Populacao.............: %d\n", (int)populacao2); 
    printf("Area..................: %.2f Km2\n", (float)area2);
    printf("PIB...................: R$ %.2lf\n", (double)pib2);
    printf("Pontos turisticos.....: %d\n", (int)nPontosTuristicos2);
    printf("Densidade populacional: %.2f hab./km2\n", (float)densidadePopulacional2); 
    printf("PIB per capita........: R$ %.2f\n", (float)pibPerCapita2); 
    printf("Super Poder...........: %.2f\n", (float)superPoder2); 

    printf("\n\nEscolha um atributo para realizar a comparacao:\n-------------------------------------\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("\n-------------------------------------\nEscolha uma opcaoo: ");
    scanf("%d", &opcao);
  
    switch (opcao) {
        case 1:
            printf("\n\nComparacao do atributo Populacao:\n-------------------------------------\n");
            printf("%s (%s): %d\n", cidade1, estado1, populacao1);
            printf("%s (%s): %d\n", cidade2, estado2, populacao2);
            printf("\nResultado: ");
            if (populacao1 > populacao2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (populacao1 < populacao2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        case 2:
            printf("\n\nComparacao do atributo Area:\n-------------------------------------\n");
            printf("%s (%s): %.2f Km2\n", cidade1, estado1, area1);
            printf("%s (%s): %.2f Km2\n", cidade2, estado2, area2);
            printf("\nResultado: ");
            if (area1 > area2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (area1 < area2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        case 3:
            printf("\n\nComparacao do atributo PIB:\n-------------------------------------\n");
            printf("%s (%s): R$ %.2lf\n", cidade1, estado1, pib1);
            printf("%s (%s): R$ %.2lf\n", cidade2, estado2, pib2);
            printf("\nResultado: ");
            if (pib1 > pib2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (pib1 < pib2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        case 4:
            printf("\n\nComparacao do atributo Pontos Turisticos:\n-------------------------------------\n");
            printf("%s (%s): %d\n", cidade1, estado1, nPontosTuristicos1);
            printf("%s (%s): %d\n", cidade2, estado2, nPontosTuristicos2);
            printf("\nResultado: ");
            if (nPontosTuristicos1 > nPontosTuristicos2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (nPontosTuristicos1 < nPontosTuristicos2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        case 5:
            printf("\n\nComparacao do atributo Densidade Populacional:\n-------------------------------------\n");
            printf("%s (%s): %.2f hab./km2\n", cidade1, estado1, densidadePopulacional1);
            printf("%s (%s): %.2f hab./km2\n", cidade2, estado2, densidadePopulacional2);
            printf("\nResultado: ");
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (densidadePopulacional1 > densidadePopulacional2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        case 6:
            printf("\n\nComparacao do atributo PIB per Capita:\n-------------------------------------\n");
            printf("%s (%s): R$ %.2f\n", cidade1, estado1, pibPerCapita1);
            printf("%s (%s): R$ %.2f\n", cidade2, estado2, pibPerCapita2);
            printf("\nResultado: ");
            if (pibPerCapita1 > pibPerCapita2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (pibPerCapita1 < pibPerCapita2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        case 7:
            printf("\n\nComparacao do atributo Super Poder:\n-------------------------------------\n");
            printf("%s (%s): %.2f\n", cidade1, estado1, superPoder1);
            printf("%s (%s): %.2f\n", cidade2, estado2, superPoder2);
            printf("\nResultado: ");
            if (superPoder1 > superPoder2) {
                printf("A Carta 1 e a vencedora!\n");
            } else if (superPoder1 < superPoder2) {
                printf("A Carta 2 e a vencedora!\n");
            } else {
                printf("Empate!\n");
            }
            break;
    
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    // Pausa no final
    printf("\n\nPressione ENTER para finalizar...");
    getchar();
    getchar();

    return 0;
}