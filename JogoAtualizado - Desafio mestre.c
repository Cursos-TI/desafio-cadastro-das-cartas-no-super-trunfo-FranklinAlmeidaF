#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[10];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} supertrunfo;

void exibirMenu(int atributoEscolhido) {
    printf("\nEscolha o segundo atributo para comparar as cartas:\n");
    if (atributoEscolhido != 1) printf("1 - População\n");
    if (atributoEscolhido != 2) printf("2 - Área\n");
    if (atributoEscolhido != 3) printf("3 - PIB\n");
    if (atributoEscolhido != 4) printf("4 - Pontos Turísticos\n");
    if (atributoEscolhido != 5) printf("5 - Densidade Populacional\n");
    if (atributoEscolhido != 6) printf("6 - PIB per capita\n");
    printf("Opção: ");
}

int main() { 
    supertrunfo carta1, carta2;
    int opcao1, opcao2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Primeira carta
    printf("Informações da Carta 1:\n");

    printf("Digite o nome do Estado da primeira carta (ex: SP para São Paulo): ");
    scanf("%s", carta1.estado); 

    printf("Digite o código da primeira carta: ");
    scanf("%s", carta1.codigo); 

    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nomeCidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área em Km² da cidade: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB em R$: ");
    scanf("%f", &carta1.pib);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Segunda Carta
    printf("\nInformações da Carta 2:\n");

    printf("Digite o nome do Estado da segunda carta (ex: RJ para Rio de Janeiro): ");
    scanf("%s", carta2.estado);

    printf("Digite o código da segunda carta: ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.nomeCidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em Km² da cidade: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB em R$: ");
    scanf("%f", &carta2.pib);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos); 

    // Cálculos adicionais
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;
    
    pibPerCapita1 = carta1.pib / carta1.populacao;
    pibPerCapita2 = carta2.pib / carta2.populacao;

    // Menu para escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Menu para escolha do segundo atributo
    exibirMenu(opcao1);
    scanf("%d", &opcao2);

    // Comparação dos atributos
    int resultado1 = 0, resultado2 = 0;

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1:
            resultado1 = carta1.populacao - carta2.populacao;
            break;
        case 2:
            resultado1 = carta1.area - carta2.area;
            break;
        case 3:
            resultado1 = carta1.pib - carta2.pib;
            break;
        case 4:
            resultado1 = carta1.pontosTuristicos - carta2.pontosTuristicos;
            break;
        case 5:
            resultado1 = densidade2 - densidade1; // Menor densidade vence
            break;
        case 6:
            resultado1 = pibPerCapita1 - pibPerCapita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1:
            resultado2 = carta1.populacao - carta2.populacao;
            break;
        case 2:
            resultado2 = carta1.area - carta2.area;
            break;
        case 3:
            resultado2 = carta1.pib - carta2.pib;
            break;
        case 4:
            resultado2 = carta1.pontosTuristicos - carta2.pontosTuristicos;
            break;
        case 5:
            resultado2 = densidade2 - densidade1; // Menor densidade vence
            break;
        case 6:
            resultado2 = pibPerCapita1 - pibPerCapita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Soma dos resultados
    int somaResultados = resultado1 + resultado2;

    // Exibição dos resultados
    printf("\nResultado da Comparação:\n");
    printf("Carta 1: %s\n", carta1.nomeCidade);
    printf("Carta 2: %s\n", carta2.nomeCidade);

    printf("\nAtributos Comparados:\n");
    printf("Atributo 1: %s\n", opcao1 == 1 ? "População" : opcao1 == 2 ? "Área" : opcao1 == 3 ? "PIB" : opcao1 == 4 ? "Pontos Turísticos" : opcao1 == 5 ? "Densidade Populacional" : "PIB per capita");
    printf("Atributo 2: %s\n", opcao2 == 1 ? "População" : opcao2 == 2 ? "Área" : opcao2 == 3 ? "PIB" : opcao2 == 4 ? "Pontos Turísticos" : opcao2 == 5 ? "Densidade Populacional" : "PIB per capita");

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %d\n", resultado1);
    printf("Carta 2: %d\n", resultado2);

    if (somaResultados > 0)
        printf("\nA cidade %s vence!\n", carta1.nomeCidade);
    else if (somaResultados < 0)
        printf("\nA cidade %s vence!\n", carta2.nomeCidade);
    else
        printf("\nEmpate!\n");

    return 0;
}
