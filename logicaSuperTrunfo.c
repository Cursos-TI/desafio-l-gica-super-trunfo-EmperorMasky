#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre

int main() {
    // Dados da Carta 1
    char estado1[50], codigo1[10], nome1[50];
    unsigned long long populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Dados da Carta 2
    char estado2[50], codigo2[10], nome2[50];
    unsigned long long populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Entrada dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%llu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%llu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição dos cálculos
    printf("\n=== Resultados das Cartas ===\n");
    printf("Carta 1 - %s:\n", nome1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n\n", super_poder1);

    printf("Carta 2 - %s:\n", nome2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}
