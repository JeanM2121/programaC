#include <stdio.h>
//carta 1
int main(){
    char estado;
    char codigo[20];
    char cidade[20];
    int população;
    float area;
    float Pib;
    int pontos_turisticos;

//carta 2
    
    char estado2;
    char codigo2[20];
    char cidade2[20];
    int população2;
    float area2;
    float Pib2;
    int pontos_turisticos2;

//carta 1

printf("digite o estado: ");
scanf("%c", &estado);
printf("o estado é: %c\n", estado);

printf("digite o codigo: ");
scanf("%s", &codigo);
printf("o codigo é: %s\n", codigo);

printf("digite a cidade: ");
scanf("%s", &cidade);
printf("a cidade é: %s\n", cidade);

printf("digite a população: ");
scanf("%d", &população);
printf("a população é: %d\n", população);

printf("digite a area: ");
scanf("%f", &area);
printf("a area é: %f\n", area);

printf("digite o Pib: ");
scanf("%f", &Pib);
printf("o Pib é: %f\n", Pib);

printf("digite os pontos turisticos: ");
scanf("%d", &pontos_turisticos);
printf("os pontos turisticos são: %d\n", pontos_turisticos);

float densidade = (float) (população / area);
float pib_per_capita = (float) (Pib / população);

printf("Densidade: %.2f\n", densidade);

printf("pib per capita: %.2f\n", pib_per_capita);
 

//carta 2
 
printf("digite o estado2: ");
scanf("%c", &estado2);
printf("o estado2 é: %c\n", estado2);

printf("digite o codigo2: ");
scanf("%s", &codigo2);
printf("o codigo2 é: %s\n", codigo2);

printf("digite a cidade2: ");
scanf("%s", &cidade2);
printf("a cidade2 é: %s\n", cidade2);

printf("digite a população2: ");
scanf("%d", &população2);
printf("a população é: %d\n", população2);

printf("digite a area2: ");
scanf("%f", &area2);
printf("a area é: %f\n", area2);

printf("digite o Pib2: ");
scanf("%f", &Pib2);
printf("o Pib é: %f\n", Pib2);

printf("digite os pontos turisticos2: ");
scanf("%d", &pontos_turisticos2);
printf("os pontos turisticos são: %d\n", pontos_turisticos2);

float densidade2 = (float) (população2 / area2);
float pib_per_capita2 = (float) (Pib2 / população2);

printf("Densidade: %.2f\n", densidade2);

printf("pib per capita: %.2f\n", pib_per_capita2);


return 0;
}
    
     
  
 