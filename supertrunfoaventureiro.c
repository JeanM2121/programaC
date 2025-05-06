#include <stdio.h>

int main() {
    //carta 1
    
    char estado;
    char codigo[20];
    char cidade[20];
    long int população;
    float area;
    float Pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float superpoder;

     //carta 2
    
     char estado2;
     char codigo2[20];
     char cidade2[20];
     int população2;
     float area2;
     float Pib2;
     int pontos_turisticos2;
     float densidade2;
     float pib_per_capita2;
     float superpoder2;

    //carta 1
    printf(" carta 1: \n");
    printf("digite o estado: ");
    scanf(" %c", &estado);
    printf("o estado é: %c\n", estado);

    printf("digite o codigo: ");
    scanf("%s", codigo);
    printf("o codigo é: %s\n", codigo);

    printf("digite a cidade: ");
    scanf("%s", cidade);
    printf("a cidade é: %s\n", cidade);

    printf("digite a população: ");
    scanf("%ld", &população); 
    printf("a população é: %ld\n", população);

    printf("digite a area: ");
    scanf("%f", &area);
    printf("a area é: %f\n", area);

    printf("digite o Pib: ");
    scanf("%f", &Pib);
    printf("o Pib é: %f\n", Pib);

    printf("digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("os pontos turisticos são: %d\n", pontos_turisticos);

    densidade = (float)população / area; 
    printf("Densidade: %.2f\n", densidade);
    
    pib_per_capita = (float)Pib / população;
    printf("pib per capita: %.2f\n", pib_per_capita);

    superpoder = (float) população + Pib + area + pontos_turisticos + densidade + pib_per_capita;
    printf("o superpoder é: %lu\n", &superpoder);
    
    //carta 2
    printf(" carta 2: \n");
    printf("digite o estado2: ");
    scanf(" %c", &estado2);
    printf("o estado2 é: %c\n", estado2);

    printf("digite o codigo2: ");
    scanf("%s", codigo2);
    printf("o codigo é: %s\n", codigo2);

    printf("digite a cidade2: ");
    scanf("%s", cidade2);
    printf("a cidade é: %s\n", cidade2);

    printf("digite a população2: ");
    scanf("%ld", &população2); 
    printf("a população2 é: %ld\n", população2);

    printf("digite a area2: ");
    scanf("%f", &area2);
    printf("a area2 é: %f\n", area2);

    printf("digite o Pib2: ");
    scanf("%f", &Pib2);
    printf("o Pib2 é: %f\n", Pib2);

    printf("digite os pontos turisticos2: ");
    scanf("%d", &pontos_turisticos2);
    printf("os pontos turisticos2 são: %d\n", pontos_turisticos2);

    densidade2 = (float)população2 / area2; 
    printf("Densidade: %.2f\n", densidade2);

    pib_per_capita2 = (float)Pib2 / população2;
    printf("pib per capita2: %.2f\n", pib_per_capita2);

    superpoder2 = (float) população2 + Pib2 + area2 + pontos_turisticos2 + densidade2 + pib_per_capita2;
    printf("o superpoder2 é: %lu\n", &superpoder2);
    
    return 0;
}
