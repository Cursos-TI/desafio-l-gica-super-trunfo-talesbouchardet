#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3], cidade1[60], codigo1[7];
    int populacao1, nPontosTuristicos1;
    float area1, densidadePopulacional1, pibPerCapita1, superPoder1;

    char estado2[3], cidade2[60], codigo2[7];
    int populacao2, nPontosTuristicos2;
    float area2, densidadePopulacional2, pibPerCapita2, superPoder2;

    char atributoEscolhido1[30], atributoEscolhido2[30];
    double pib1, pib2;
    int opcao1, opcao2, codigo = 1;
    float resultado1, resultado2, somaCarta1, somaCarta2, valor1Atributo1, valor2Atributo1, valor1Atributo2, valor2Atributo2;

    // Dados da primeira carta
    strcpy(estado1, "SP");
    strcpy(cidade1, "Sao Paulo");
    snprintf(codigo1, sizeof(codigo1), "%2s%02d", estado1, codigo);
    pib1 = 700000000000.00;
    populacao1 = 12300000;
    nPontosTuristicos1 = 15;
    area1 = 1521.11;
    densidadePopulacional1 = (float)populacao1 / (float)area1;
    pibPerCapita1 = (float)pib1 / (float)populacao1;
    superPoder1 = (float)pib1 + (float)area1 + (float)populacao1 + (float)nPontosTuristicos1 + (float)pibPerCapita1 + (1.0f / (float)densidadePopulacional1);

    // Dados da segunda carta
    strcpy(estado2, "RJ");
    strcpy(cidade2, "Rio de Janeiro");
    pib2 = 300000000000.00;
    populacao2 = 6748000;
    nPontosTuristicos2 = 20;
    area2 = 1182.30;
    densidadePopulacional2 = (float)populacao2 / (float)area2;
    pibPerCapita2 = (float)pib2 / (float)populacao2;
    superPoder2 = (float)pib2 + (float)area2 + (float)populacao2 + (float)nPontosTuristicos2 + (float)pibPerCapita2 + (1.0f / (float)densidadePopulacional2);

    if (strcmp(estado2, estado1) == 0) {
        codigo += 1;
    }

    snprintf(codigo2, sizeof(codigo2), "%2s%02d", estado2, codigo);

    // Exibição das cartas
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

do {
    printf("\n\nEscolha o primeiro atributo para realizar a comparacao:\n-------------------------------------\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("\n-------------------------------------\nEscolha uma opcao: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 7) printf("\n\nOpcao invalida. Tente novamente.\n");
} while (opcao1 < 1 || opcao1 > 7);
    // Escolha do segundo atributo
    do {
        printf("\n\nEscolha o segundo atributo para realizar a comparacao:\n-------------------------------------\n");
        if (opcao1 != 1) printf("1. Populacao\n");
        if (opcao1 != 2) printf("2. Area\n");
        if (opcao1 != 3) printf("3. PIB\n");
        if (opcao1 != 4) printf("4. Pontos turisticos\n");
        if (opcao1 != 5) printf("5. Densidade populacional\n");
        if (opcao1 != 6) printf("6. PIB per capita\n");
        if (opcao1 != 7) printf("7. Super Poder\n");
        printf("\n-------------------------------------\nEscolha uma opcao: ");
        scanf("%d", &opcao2);

        if (opcao2 < 1 || opcao2 > 7) printf("\nOpcao invalida."); 
        if (opcao2 == opcao1) printf("\nO segundo atributo nao pode ser igual ao primeiro. Tente novamente.");
    } while (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 7);


// Escolha do primeiro atributo
// Escolha do primeiro atributo
switch (opcao1) {
    case 1:
        valor1Atributo1 = (float)populacao1;
        valor2Atributo1 = (float)populacao2;
        resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
        strcpy(atributoEscolhido1, "Populacao");
        break;
    case 2:
        valor1Atributo1 = area1;
        valor2Atributo1 = area2;
        resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
        strcpy(atributoEscolhido1, "Area");
        break;
    case 3:
        valor1Atributo1 = pib1;
        valor2Atributo1 = pib2;
        resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
        strcpy(atributoEscolhido1, "PIB");
        break;
    case 4:
        valor1Atributo1 = (float)nPontosTuristicos1;
        valor2Atributo1 = (float)nPontosTuristicos2;
        resultado1 = (nPontosTuristicos1 > nPontosTuristicos2) ? 1 : (nPontosTuristicos1 < nPontosTuristicos2) ? 2 : 0;
        strcpy(atributoEscolhido1, "Pontos Turisticos");
        break;
    case 5:
        valor1Atributo1 = densidadePopulacional1;
        valor2Atributo1 = densidadePopulacional2;
        resultado1 = (densidadePopulacional1 < densidadePopulacional2) ? 1 : (densidadePopulacional1 > densidadePopulacional2) ? 2 : 0;
        strcpy(atributoEscolhido1, "Densidade Populacional");
        break;
    case 6:
        valor1Atributo1 = pibPerCapita1;
        valor2Atributo1 = pibPerCapita2;
        resultado1 = (pibPerCapita1 > pibPerCapita2) ? 1 : (pibPerCapita1 < pibPerCapita2) ? 2 : 0;
        strcpy(atributoEscolhido1, "PIB per Capita");
        break;
    case 7:
        valor1Atributo1 = superPoder1;
        valor2Atributo1 = superPoder2;
        resultado1 = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 2 : 0;
        strcpy(atributoEscolhido1, "Super Poder");
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
    break;  
}

// Escolha do segundo atributo
switch (opcao2) {
    case 1:
        valor1Atributo2 = (float)populacao1;
        valor2Atributo2 = (float)populacao2;
        resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
        strcpy(atributoEscolhido2, "Populacao");
        break;
    case 2:
        valor1Atributo2 = area1;
        valor2Atributo2 = area2;
        resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
        strcpy(atributoEscolhido2, "Area");
        break;
    case 3:
        valor1Atributo2 = pib1;
        valor2Atributo2 = pib2;
        resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
        strcpy(atributoEscolhido2, "PIB");
        break;
    case 4:
        valor1Atributo2 = (float)nPontosTuristicos1;
        valor2Atributo2 = (float)nPontosTuristicos2;
        resultado2 = (nPontosTuristicos1 > nPontosTuristicos2) ? 1 : (nPontosTuristicos1 < nPontosTuristicos2) ? 2 : 0;
        strcpy(atributoEscolhido2, "Pontos Turisticos");
        break;
    case 5:
        valor1Atributo2 = densidadePopulacional1;
        valor2Atributo2 = densidadePopulacional2;
        resultado2 = (densidadePopulacional1 < densidadePopulacional2) ? 1 : (densidadePopulacional1 > densidadePopulacional2) ? 2 : 0;
        strcpy(atributoEscolhido2, "Densidade Populacional");
        break;
    case 6:
        valor1Atributo2 = pibPerCapita1;
        valor2Atributo2 = pibPerCapita2;
        resultado2 = (pibPerCapita1 > pibPerCapita2) ? 1 : (pibPerCapita1 < pibPerCapita2) ? 2 : 0;
        strcpy(atributoEscolhido2, "PIB per Capita");
        break;
    case 7:
        valor1Atributo2 = superPoder1;
        valor2Atributo2 = superPoder2;
        resultado2 = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 2 : 0;
        strcpy(atributoEscolhido2, "Super Poder");
    break;
    default:
    printf("Opcao invalida. Tente novamente.\n");
break;  
}


// Exibição dos resultados
printf("\n\nComparacao de %s:\n-------------------------------------\n", atributoEscolhido1);
printf("%s (%s): %.2f\n", cidade1, estado1, valor1Atributo1);
printf("%s (%s): %.2f\n", cidade2, estado2, valor2Atributo1); 
if (resultado1 == 1) {
    printf("A Carta 1 venceu no primeiro atributo!\n");
} else if (resultado1 == 2) {
    printf("A Carta 2 venceu no primeiro atributo!\n");
} else {
    printf("Empate no primeiro atributo!\n");
}

printf("\n\nComparacao de %s:\n-------------------------------------\n", atributoEscolhido2);
printf("%s (%s): %.2f\n", cidade1, estado1, valor1Atributo2);
printf("%s (%s): %.2f\n", cidade2, estado2, valor2Atributo2);
if (resultado2 == 1) {
    printf("A Carta 1 venceu no segundo atributo!\n");
} else if (resultado2 == 2) {
    printf("A Carta 2 venceu no segundo atributo!\n");
} else {
    printf("Empate no segundo atributo!\n");
}

// Soma dos atributos
somaCarta1 = valor1Atributo1 + valor1Atributo2;
somaCarta2 = valor2Atributo1 + valor2Atributo2;

printf("\n\nSoma dos atributos %s e %s:\n-------------------------------------\n", atributoEscolhido1, atributoEscolhido2);
printf("%s (%s): %.2f\n", cidade1, estado1, somaCarta1);
printf("%s (%s): %.2f\n", cidade2, estado2, somaCarta2);
if (somaCarta1 > somaCarta2) {
    printf("A Carta 1 venceu na soma dos atributos!\n");
} else if (somaCarta1 < somaCarta2) {
    printf("A Carta 2 venceu na soma dos atributos!\n");
} else {
    printf("Empate na soma dos atributos!\n");
}

    // Pausa no final
    printf("\n\nPressione ENTER para finalizar...");
    getchar();
    getchar();

return 0;
}