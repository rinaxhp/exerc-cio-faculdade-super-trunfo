    // --- Declaração de Variáveis: No início do programa, são criadas as variáveis necessárias para armazenar os dados de cada carta. Usamos tipos de dados como char, char[] (para strings), int e float, de acordo com a informação que será guardada. 
    // --- Entrada de Dados (scanf): A função scanf é usada para ler as informações que o usuário digita. Note o uso de um espaço antes do %c e do [^\n] para strings, que são técnicas para garantir que a leitura de dados com espaços funcione corretamente, evitando problemas com o buffer do teclado.
    // --Saída de Dados (printf): A função printf é responsável por exibir os dados na tela. Para cada tipo de variável, usamos um especificador de formato (como %c para char, %d para int, %s para strings e %.2f para float com duas casas decimais). Isso garante que as informações sejam exibidas de forma clara e organizada, exatamente como no seu exemplo.
 #include <stdio.h>

 int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // --- CADASTRO DA CARTA 2 ---
    printf("\n\n--- Cadastro da Carta 2 ---\n\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- CALCULO E EXIBICAO DOS DADOS ---
    printf("\n\n--- Cartas Cadastradas ---\n\n");

    // Calculo da Carta 1
    // Conversão de `int` para `float` para a divisão correta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

    // Calculo da Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}