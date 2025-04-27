
#include <stdio.h>

int main() {

    
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;

    
    float densidade1, densidade2;

    
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //Menu Interativo
    int opcao;

    printf("Super Trunfo Aventureiro\n");
    printf("atributo a ser comparado\n");

    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("População de Carta 1 venceu\n");
            } else if (populacao1 < populacao2) {
                printf("População de Carta 2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Area de Carta 1 venceu\n");
            } else if (area1 < area2) {
                printf("Area de Carta 2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;

        case 3:
            if (pib1 > pib2) {
                printf("PIB de Carta 1 venceu\n");
            } else if (pib1 < pib2) {
                printf("PIB de Carta 2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;

        case 4:
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Pontos Turisticos de Carta 1 venceu\n");
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("Pontos Turisticos de Carta 2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;

        case 5:
            if (densidade1 < densidade2) {
                printf("Densidade populacional de Carta 1 venceu (%.2f < %.2f)\n", densidade1, densidade2);
            } else if (densidade1 > densidade2) {
                printf("Densidade populacional de Carta 2 venceu (%.2f < %.2f)\n", densidade2, densidade1);
            } else {
                printf("Empate\n");
            }
            break;

        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}