#include <stdio.h>

typedef struct {
    char estado[10];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} supertrunfo;

int main() { 
    supertrunfo carta1, carta2;
    int opcao;

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
    float densidade1 = carta1.populacao / carta1.area;
    float densidade2 = carta2.populacao / carta2.area;
    
    float pibPerCapita1 = carta1.pib / carta1.populacao;
    float pibPerCapita2 = carta2.pib / carta2.populacao;


    // Menu para escolha
    printf("\nEscolha um critério para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("A cidade %s vence com maior população!\n", carta1.nomeCidade);
            else if (carta1.populacao < carta2.populacao)
                printf("A cidade %s vence com maior população!\n", carta2.nomeCidade);
            else
                printf("Empate na população!\n");
            break;
    
        case 2:
            if (carta1.area > carta2.area)
                printf("A cidade %s vence com maior área!\n", carta1.nomeCidade);
            else if (carta1.area < carta2.area)
                printf("A cidade %s vence com maior área!\n", carta2.nomeCidade);
            else
                printf("Empate na área!\n");
            break;
    
        case 3:
            if (carta1.pib > carta2.pib)
                printf("A cidade %s vence com maior PIB!\n", carta1.nomeCidade);
            else if (carta1.pib < carta2.pib)
                printf("A cidade %s vence com maior PIB!\n", carta2.nomeCidade);
            else
                printf("Empate entre os PIBs!\n");
            break;
    
        case 4:
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("A cidade %s vence com maior número de pontos turísticos!\n", carta1.nomeCidade);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("A cidade %s vence com maior número de pontos turísticos!\n", carta2.nomeCidade);
            else
                printf("Empate nos pontos turísticos!\n");
            break;

        case 5:
            printf("\nDensidade populacional:\n");
            printf("%s: %.2f hab/km²\n", carta1.nomeCidade, densidade1);
            printf("%s: %.2f hab/km²\n", carta2.nomeCidade, densidade2);
            if (densidade1 > densidade2)
                printf("A cidade %s vence com maior densidade populacional!\n", carta1.nomeCidade);
            else if (densidade1 < densidade2)
                printf("A cidade %s vence com maior densidade populacional!\n", carta2.nomeCidade);
            else
                printf("Empate na densidade populacional!\n");
            break;

        case 6:
            printf("\nPIB per capita:\n");
            printf("%s: R$ %.2f\n", carta1.nomeCidade, pibPerCapita1);
            printf("%s: R$ %.2f\n", carta2.nomeCidade, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("A cidade %s vence com maior PIB per capita!\n", carta1.nomeCidade);
            else if (pibPerCapita1 < pibPerCapita2)
                printf("A cidade %s vence com maior PIB per capita!\n", carta2.nomeCidade);
            else
                printf("Empate no PIB per capita!\n");
            break;
    
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
