#include <stdio.h>

int main()
{
    int opcao;

    // Menu
    printf("===== Super Trunfo - Estados =====\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        // Dados da carta 1
        char estado1, codigo1[4], cidade1[50];
        unsigned long int populacao1;
        double area1, pib1;
        int pontos1;

        printf("\nDigite os dados da Carta 1:\n");
        printf("Estado: ");
        scanf(" %c", &estado1);
        printf("Codigo: ");
        scanf("%s", codigo1);
        printf("Cidade: ");
        scanf(" %[^\n]", cidade1);
        printf("Populacao: ");
        scanf("%lu", &populacao1);
        printf("Area: ");
        scanf("%lf", &area1);
        printf("PIB (bilhoes): ");
        scanf("%lf", &pib1);
        printf("Pontos turisticos: ");
        scanf("%d", &pontos1);

        // Dados da carta 2
        char estado2, codigo2[4], cidade2[50];
        unsigned long int populacao2;
        double area2, pib2;
        int pontos2;

        printf("\nDigite os dados da Carta 2:\n");
        printf("Estado: ");
        scanf(" %c", &estado2);
        printf("Codigo: ");
        scanf("%s", codigo2);
        printf("Cidade: ");
        scanf(" %[^\n]", cidade2);
        printf("Populacao: ");
        scanf("%lu", &populacao2);
        printf("Area: ");
        scanf("%lf", &area2);
        printf("PIB (bilhoes): ");
        scanf("%lf", &pib2);
        printf("Pontos turisticos: ");
        scanf("%d", &pontos2);

        // Escolha das características
        int carac1, carac2;
        printf("\nEscolha duas caracteristicas para comparar:\n");
        printf("0 - Populacao\n1 - Area\n2 - PIB\n3 - Pontos turisticos\n");
        printf("Primeira caracteristica: ");
        scanf("%d", &carac1);
        printf("Segunda caracteristica: ");
        scanf("%d", &carac2);

        // Comparação da primeira característica
        printf("\nComparacao da primeira caracteristica:\n");
        switch (carac1)
        {
        case 0:
            printf("Resultado: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : (populacao2 > populacao1) ? "Carta 2 venceu"
                                                                                                               : "Empate");
            break;
        case 1:
            printf("Resultado: %s\n", (area1 > area2) ? "Carta 1 venceu" : (area2 > area1) ? "Carta 2 venceu"
                                                                                           : "Empate");
            break;
        case 2:
            printf("Resultado: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : (pib2 > pib1) ? "Carta 2 venceu"
                                                                                       : "Empate");
            break;
        case 3:
            printf("Resultado: %s\n", (pontos1 > pontos2) ? "Carta 1 venceu" : (pontos2 > pontos1) ? "Carta 2 venceu"
                                                                                                   : "Empate");
            break;
        default:
            printf("Opcao invalida!\n");
        }

        // Comparação da segunda característica
        printf("\nComparacao da segunda caracteristica:\n");
        switch (carac2)
        {
        case 0:
            printf("Resultado: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : (populacao2 > populacao1) ? "Carta 2 venceu"
                                                                                                               : "Empate");
            break;
        case 1:
            printf("Resultado: %s\n", (area1 > area2) ? "Carta 1 venceu" : (area2 > area1) ? "Carta 2 venceu"
                                                                                           : "Empate");
            break;
        case 2:
            printf("Resultado: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : (pib2 > pib1) ? "Carta 2 venceu"
                                                                                       : "Empate");
            break;
        case 3:
            printf("Resultado: %s\n", (pontos1 > pontos2) ? "Carta 1 venceu" : (pontos2 > pontos1) ? "Carta 2 venceu"
                                                                                                   : "Empate");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    }
    else if (opcao == 2)
    {
        printf("\n===== Regras =====\n");
        printf("1. Cada jogador cadastra cartas com 4 caracteristicas: populacao, area, PIB e pontos turisticos.\n");
        printf("2. Escolhe-se duas cartas e duas caracteristicas para comparar.\n");
        printf("3. O programa mostra qual carta venceu em cada caracteristica.\n");
    }
    else
    {
        printf("\nSaindo do jogo...\n");
    }

    return 0;
}
