#include <stdio.h>

int main() {
    // === Declaração das variáveis da Carta 1 ===
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // === Declaração das variáveis da Carta 2 ===
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    
    // === Entrada da Carta 1 ===
    printf("=== Cadastro da Carta 1 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // === Entrada da Carta 2 ===
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // === Cálculos dos atributos derivados === 
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    
    float pibPerCapita1 = pib1 * 1000000000.0 / populacao1; // convertendo PIB de bilhões para reais
    float pibPerCapita2 = pib2 * 1000000000.0 / populacao2;

    float superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 
                        + pibPerCapita1 + (1.0 / densidade1);

    float superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 
                        + pibPerCapita2 + (1.0 / densidade2);
   
    // === Resultados da Comparação ===
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2, 
           (populacao1 > populacao2) ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n", 
           (area1 > area2) ? 1 : 2, 
           (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n", 
           (pib1 > pib2) ? 1 : 2, 
           (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, 
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? 1 : 2, 
           (densidade1 < densidade2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2, 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superPoder1 > superPoder2) ? 1 : 2, 
           (superPoder1 > superPoder2) ? 1 : 0);  
           
    // === Exibição final das cartas para conferência ===
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\nCodigo: %s\n Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("Populacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\n", populacao1, area1, pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n PIB per Capita: %.2f R$\n", densidade1, pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\nCodigo: %s\n Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("Populacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\n", populacao2, area2, pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n PIB per Capita: %.2f R$\n", densidade2, pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    return 0;


}