#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 // Área para definição das variáveis para armazenar as propriedades das cidades
    /* -------- Carta 1 -------- */
    char estado1[50];
    char codigo1[4];      /* Ex: A01 (3 chars + '\0') */
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* -------- Carta 2 -------- */
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados

    /* Entrada dos dados - Carta 1 */
    printf("Cadastro da Carta 1\n");

    printf("Estado: ");
    fflush(stdout);
    scanf(" %49[^\n]", estado1);

    printf("Codigo da Carta (ex: A01): ");
    fflush(stdout);
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    fflush(stdout);
    scanf(" %49[^\n]", cidade1);

    printf("Populacao (Digite sem pontos): ");
    fflush(stdout);
    scanf("%d", &populacao1);

    printf("Area em km2: ");
    fflush(stdout);
    scanf("%f", &area1);

    printf("PIB: ");
    fflush(stdout);
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    fflush(stdout);
    scanf("%d", &pontosTuristicos1);

    printf("\n");

        /* Entrada dos dados - Carta 2 */
    printf("Cadastro da Carta 2\n");

    printf("Estado: ");
    fflush(stdout);
    scanf(" %49[^\n]", estado2);

    printf("Codigo da Carta (ex: B02): ");
    fflush(stdout);
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    fflush(stdout);
    scanf(" %49[^\n]", cidade2);

    printf("Populacao (Digite sem pontos): ");
    fflush(stdout);
    scanf("%d", &populacao2);

    printf("Area em km2: ");
    fflush(stdout);
    scanf("%f", &area2);

    printf("PIB: ");
    fflush(stdout);
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    fflush(stdout);
    scanf("%d", &pontosTuristicos2);

    printf("\n\n");

  // Área para exibição dos dados da cidade

    /* Saída carta 1 */
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.f km2\n", area1);
    printf("PIB: %.f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");
    
    /* Saída carta 2 */
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.f km2\n", area2);
    printf("PIB: %.f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
} 
