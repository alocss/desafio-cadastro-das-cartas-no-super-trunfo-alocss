#include <stdio.h>

// Função principal
int main() {
    // Dados da Carta 1
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char nome1[30] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontosTuristicos1 = 50;

    // Dados da Carta 2
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char nome2[30] = "Rio de Janeiro";
    unsigned long int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões
    int pontosTuristicos2 = 30;

    // Cálculo da Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita (PIB convertido para reais)
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // Escolha do atributo para comparação: População
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);

    // Comparação usando if e if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
