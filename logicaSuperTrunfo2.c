#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre

int main() {
    // Dados das cartas
    char nome1[50], nome2[50];
    unsigned long long populacao1, populacao2;
    float area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%llu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos_turisticos1);
    densidade1 = populacao1 / area1;

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%llu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos_turisticos2);
    densidade2 = populacao2 / area2;

    // Exibição inicial dos atributos
    printf("\n=== Atributos disponíveis ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    // Escolha do primeiro atributo
    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo (1-5): ");
    scanf("%d", &atributo1);

    // Menu dinâmico: impede repetição
    printf("\nEscolha o segundo atributo (1-5), diferente do primeiro: ");
    scanf("%d", &atributo2);

    if (atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5 || atributo1 == atributo2) {
        printf("\nErro: os atributos devem ser válidos e diferentes!\n");
        return 1;
    }

    // Função auxiliar para obter o valor numérico de cada atributo
    float valor1A = 0, valor2A = 0;

    // --- Primeiro atributo ---
    switch (atributo1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = pontos_turisticos1; valor2A = pontos_turisticos2; break;
        case 5: valor1A = densidade1; valor2A = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // --- Segundo atributo ---
    float valor1B = 0, valor2B = 0;
    switch (atributo2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = pontos_turisticos1; valor2B = pontos_turisticos2; break;
        case 5: valor1B = densidade1; valor2B = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // --- Cálculo da pontuação ---
    // Regra: maior valor vence, exceto densidade (menor vence)
    float pontos1 = 0, pontos2 = 0;

    // Primeiro atributo
    if (atributo1 == 5)
        (valor1A < valor2A) ? (pontos1++) : (valor2A < valor1A ? pontos2++ : 0);
    else
        (valor1A > valor2A) ? (pontos1++) : (valor2A > valor1A ? pontos2++ : 0);

    // Segundo atributo
    if (atributo2 == 5)
        (valor1B < valor2B) ? (pontos1++) : (valor2B < valor1B ? pontos2++ : 0);
    else
        (valor1B > valor2B) ? (pontos1++) : (valor2B > valor1B ? pontos2++ : 0);

    // Soma dos valores dos dois atributos
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    // Exibição do resultado detalhado
    printf("\n=== Resultado da Comparação ===\n");
    printf("País 1: %s\n", nome1);
    printf("País 2: %s\n", nome2);
    printf("\nAtributos escolhidos: %d e %d\n", atributo1, atributo2);
    printf("%s - Atributos: %.2f | %.2f | Soma: %.2f\n", nome1, valor1A, valor1B, soma1);
    printf("%s - Atributos: %.2f | %.2f | Soma: %.2f\n", nome2, valor2A, valor2B, soma2);

    // Determina o vencedor pela soma
    printf("\nResultado final: ");
    if (soma1 > soma2)
        printf("%s venceu!\n", nome1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}
