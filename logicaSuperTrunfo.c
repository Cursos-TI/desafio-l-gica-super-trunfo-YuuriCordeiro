#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char nome1[] = "Reino de Eldoria";
    int populacao1 = 8500; // em milhares
    float pib1 = 320.75;   // em bilhões
    int pontosTuristicos1 = 12;

    // Variáveis da carta 2
    char nome2[] = "Império de Zandor";
    int populacao2 = 9200; // em milhares
    float pib2 = 410.60;   // em bilhões
    int pontosTuristicos2 = 18;

    int escolha;

    printf("======= DESAFIO DE LOGICA: SUPER TRUNFO DOS PAISES =======\n");

    printf("\n--- Sua carta: %s ---\n", nome1);
    printf("1 - Populacao: %d mil habitantes\n", populacao1);
    printf("2 - PIB: %.2f bilhoes\n", pib1);
    printf("3 - Pontos Turisticos: %d locais\n", pontosTuristicos1);

    // Escolha do jogador
    printf("\nEscolha um atributo para competir (1-População, 2-PIB, 3-Pontos Turísticos): ");
    scanf("%d", &escolha);

    // Mostra carta do oponente
    printf("\n--- Carta do oponente: %s ---\n", nome2);
    printf("Populacao: %d mil habitantes\n", populacao2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d locais\n", pontosTuristicos2);

    // Verificação do vencedor
    printf("\nResultado:\n");
    switch(escolha) {
        case 1:
            if (populacao1 > populacao2)
                printf("Você venceu! Sua população é maior.\n");
            else if (populacao1 < populacao2)
                printf("Você perdeu! A população do oponente é maior.\n");
            else
                printf("Empate! Populações iguais.\n");
            break;
        case 2:
            if (pib1 > pib2)
                printf("Você venceu! Seu PIB é maior.\n");
            else if (pib1 < pib2)
                printf("Você perdeu! O PIB do oponente é maior.\n");
            else
                printf("Empate! PIBs iguais.\n");
            break;
        case 3:
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Você venceu! Mais pontos turísticos.\n");
            else if (pontosTuristicos1 < pontosTuristicos2)
                printf("Você perdeu! Oponente tem mais pontos turísticos.\n");
            else
                printf("Empate! Mesmo número de pontos turísticos.\n");
            break;
        default:
            printf("Escolha inválida.\n");
    }

    return 0;
}
