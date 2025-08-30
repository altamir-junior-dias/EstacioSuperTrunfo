#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; 
    char nomeCidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Variáveis para a escolha do atributo
    int opcao;

    // Leitura dos dados da primeira carta
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n");
    printf("\nCadastro da Carta 1\n");
    printf("Estado (apenas a sigla, ex: S): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);
    
    printf("Nome da Cidade (uma palavra): ");
    scanf("%49s", nomeCidade1); 
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Estado (apenas a sigla, ex: R): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Nome da Cidade (uma palavra): ");
    scanf("%49s", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;

    // Exibição dos dados das cartas com cálculos
    printf("\n=== DADOS DAS CARTAS ===\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Menu para escolha do atributo de comparação
    printf("\n=== ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos Turísticos\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    // COMPARAÇÃO DAS CARTAS
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    
    float valor1, valor2;
    char nomeAtributo[30];
    int menorVence = 0; // 0 = maior vence, 1 = menor vence
    
    // Determinar qual atributo será comparado com base na escolha do usuário
    switch(opcao) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            printf("Atributo escolhido: População\n");
            menorVence = 0;
            break;
            
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            printf("Atributo escolhido: Área\n");
            menorVence = 0;
            break;
            
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            printf("Atributo escolhido: PIB\n");
            menorVence = 0;
            break;
            
        case 4: // Densidade Populacional
            valor1 = densidade1;
            valor2 = densidade2;
            printf("Atributo escolhido: Densidade Populacional\n");
            menorVence = 1; // Para densidade, o menor valor vence
            break;
            
        case 5: // PIB per capita
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            printf("Atributo escolhido: PIB per capita\n");
            menorVence = 0;
            break;
            
        case 6: // Pontos Turísticos
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            printf("Atributo escolhido: Pontos Turísticos\n");
            menorVence = 0;
            break;
            
        default:
            printf("Opção inválida! Usando População como padrão.\n");
            valor1 = populacao1;
            valor2 = populacao2;
            printf("Atributo escolhido: População\n");
            menorVence = 0;
            break;
    }
    
    // Exibir informações da comparação
    printf("Comparação de cartas:\n");
    printf("Carta 1 - %s (%c): ", nomeCidade1, estado1);
    
    if (opcao == 1 || opcao == 6) {
        printf("%.0f\n", valor1);
    } else {
        printf("%.2f\n", valor1);
    }
    
    printf("Carta 2 - %s (%c): ", nomeCidade2, estado2);
    
    if (opcao == 1 || opcao == 6) {
        printf("%.0f\n", valor2);
    } else {
        printf("%.2f\n", valor2);
    }
    
    // Determinar o vencedor
    printf("Resultado: ");
    
    if (menorVence) {
        // Para densidade populacional, o menor valor vence
        if (valor1 < valor2) {
            printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor2 < valor1) {
            printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    } else {
        // Para outros atributos, o maior valor vence
        if (valor1 > valor2) {
            printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor2 > valor1) {
            printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}