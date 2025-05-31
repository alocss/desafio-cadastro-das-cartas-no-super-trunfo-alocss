#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados das cartas
struct Carta {
    char estado[30];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
    float densidadeDemografica;
    float pibPerCapita;
};

int main() {
    // Cadastro fixo de duas cartas
    struct Carta carta1 = {"SP", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct Carta carta2 = {"RJ", "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    // Cálculo da densidade demográfica e PIB per capita
    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    int opcao;

    printf("===== SUPER TRUNFO - COMPARAÇÃO DE CARTAS =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (Carta 1) x %s (Carta 2)\n", carta1.nome, carta2.nome);

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedora: %s!\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedora: %s!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedora: %s!\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Vencedora: %s!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões de reais\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões de reais\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedora: %s!\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Vencedora: %s!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Vencedora: %s!\n", carta1.nome);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Vencedora: %s!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidadeDemografica);
            if (carta1.densidadeDemografica < carta2.densidadeDemografica)
                printf("Vencedora: %s (menor densidade)!\n", carta1.nome);
            else if (carta2.densidadeDemografica < carta1.densidadeDemografica)
                printf("Vencedora: %s (menor densidade)!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("PIB per capita:\n");
            printf("%s: R$ %.2f\n", carta1.nome, carta1.pibPerCapita);
            printf("%s: R$ %.2f\n", carta2.nome, carta2.pibPerCapita);
            if (carta1.pibPerCapita > carta2.pibPerCapita)
                printf("Vencedora: %s!\n", carta1.nome);
            else if (carta2.pibPerCapita > carta1.pibPerCapita)
                printf("Vencedora: %s!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 6.\n");
    }

    return 0;
}
