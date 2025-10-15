#include <stdio.h>

int main() {
    // Dados das Cartas
    // Carta 1
    char nome1[50], nome2[50];
    unsigned long long populacao1, populacao2;
    float area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2;

    // Entrada de dados para Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nome1);  // lê o nome com espaços
    printf("Populacao: ");
    scanf("%llu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%f", &pontos_turisticos1);
    densidade1 = populacao1 / area1;  // Calcula a densidade demográfica

    // Entrada de dados para Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nome2);  // lê o nome com espaços
    printf("Populacao: ");
    scanf("%llu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%f", &pontos_turisticos2);
    densidade2 = populacao2 / area2;  // Calcula a densidade demográfica

    // Menu interativo
    int opcao;
    printf("\n=== Menu de Comparacao ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Digite sua escolha (1-5): ");
    
    // Validação de entrada para a opção escolhida
    if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 5) {
        printf("Opcao invalida! Por favor, escolha um numero de 1 a 5.\n");
        return 1; // Encerra o programa em caso de erro
    }

    // Comparação de atributos com switch
    switch (opcao) {
        case 1: // População
            printf("\n=== Comparacao de Populacao ===\n");
            printf("País 1: %s - População: %llu\n", nome1, populacao1);
            printf("País 2: %s - População: %llu\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Carta %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Carta %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 2: // Área
            printf("\n=== Comparacao de Area ===\n");
            printf("País 1: %s - Area: %.2f km²\n", nome1, area1);
            printf("País 2: %s - Area: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Carta %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Carta %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\n=== Comparacao de PIB ===\n");
            printf("País 1: %s - PIB: %.2f bilhões\n", nome1, pib1);
            printf("País 2: %s - PIB: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Carta %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Carta %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("\n=== Comparacao de Pontos Turisticos ===\n");
            printf("País 1: %s - Pontos Turísticos: %.0f\n", nome1, pontos_turisticos1);
            printf("País 2: %s - Pontos Turísticos: %.0f\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Carta %s venceu!\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Carta %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("\n=== Comparacao de Densidade Demografica ===\n");
            printf("País 1: %s - Densidade: %.2f pessoas/km²\n", nome1, densidade1);
            printf("País 2: %s - Densidade: %.2f pessoas/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) { // Menor densidade vence
                printf("Carta %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Carta %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            return 1;
    }

    return 0;
}
