    // --- Declaração de Variáveis: No início do programa, são criadas as variáveis necessárias para armazenar os dados de cada carta. Usamos tipos de dados como char, char[] (para strings), int e float, de acordo com a informação que será guardada. 
    // --- Entrada de Dados (scanf): A função scanf é usada para ler as informações que o usuário digita. Note o uso de um espaço antes do %c e do [^\n] para strings, que são técnicas para garantir que a leitura de dados com espaços funcione corretamente, evitando problemas com o buffer do teclado.
    // --Saída de Dados (printf): A função printf é responsável por exibir os dados na tela. Para cada tipo de variável, usamos um especificador de formato (como %c para char, %d para int, %s para strings e %.2f para float com duas casas decimais). Isso garante que as informações sejam exibidas de forma clara e organizada, exatamente como no seu exemplo.

#include <stdio.h>

int main() {
    char estado, codigo[4], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;

    printf("--- Carta 1 ---\n");
    scanf(" %c", &estado);
    scanf("%s", codigo);
    scanf(" %[^\n]", nome_cidade);
    scanf("%d", &populacao);
    scanf("%f", &area);
    scanf("%f", &pib);
    scanf("%d", &pontos_turisticos);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos);

    printf("--- Carta 2 ---\n");
    scanf(" %c", &estado);
    scanf("%s", codigo);
    scanf(" %[^\n]", nome_cidade);
    scanf("%d", &populacao);
    scanf("%f", &area);
    scanf("%f", &pib);
    scanf("%d", &pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);
    
    return 0;
}

    