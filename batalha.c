 

 int main() {
    // Variáveis para a Carta 1
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis para a Carta 2
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Leitura dos dados da Carta 1
    printf("Dados da Carta 1 (populacao, area, pib, pontos_turisticos): ");
    scanf("%lu %f %f %d", &populacao1, &area1, &pib1, &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("Dados da Carta 2 (populacao, area, pib, pontos_turisticos): ");
    scanf("%lu %f %f %d", &populacao2, &area2, &pib2, &pontos_turisticos2);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // --- Comparação dos Atributos ---
    printf("\n--- Comparacao de Cartas ---\n");
    
    // Comparação de População
    printf("Populacao: ");
    if (populacao1 > populacao2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    // Comparação de Área
    printf("Area: ");
    if (area1 > area2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    // Comparação de PIB
    printf("PIB: ");
    if (pib1 > pib2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    // Comparação de Pontos Turísticos
    printf("Pontos Turisticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    // Comparação de PIB per Capita
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    // Comparação de Super Poder
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) printf("Carta 1 venceu (1)\n"); else printf("Carta 2 venceu (0)\n");

    return 0;
}