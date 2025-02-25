#include <stdio.h>

typedef struct {
    char estado [10];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

int main() {
    CartaSuperTrunfo carta1, carta2;
    
    // Leitura dos dados da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %s", &carta1.estado);
    
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", carta1.codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%49s", carta1.nomeCidade);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &carta1.area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %s", &carta2.estado);
    
    printf("Digite o código da segunda carta (ex: A01): ");
    scanf("%3s", carta2.codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%49s", carta2.nomeCidade);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &carta2.area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}