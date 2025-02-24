#include <stdio.h>
#include <string.h>

int main() {
    char estado;         
    char codCarta[3];    
    char nomeCidade[50]; 
    int populacao;
    float area2;
    float pib;
    int numeroPontosTuristico;

    printf("Digite uma letra de 'A' a 'H' que corresponde ao seu estado: \n");
    scanf(" %c", &estado);  

    printf("Digite um número de 01 a 04 referente ao código da sua Carta: \n");
    scanf("%2s", codCarta);  

    printf("Dgite o nome da sua cidade \n");
    scanf("%s", &nomeCidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area2);

    printf("Digite qual o valor do Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristico);
   

    
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %c%s\n", estado, codCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristico);

    return 0;
}
