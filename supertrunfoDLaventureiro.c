#include <stdio.h>

int main(){

int populacao1;

int populacao2;

float area1;

float area2;

float pib1;

float pib2;

int Pturisticos1;

int Pturisticos2;

float densidade1, densidade2;

densidade1 = (float) populacao1 / area1;

densidade2 = (float) populacao2 / area2;

printf("digite o populacao1: ");
scanf("%d", &populacao1);
printf("a populacao1 é: %d\n", populacao1);

printf("digite o populacao2: ");
scanf("%2d", populacao2);
printf("a populacao2 é: %d\n", populacao2);
 
printf("digite a area1: ");
scanf("%f", &area1);
printf("a area1 é: %f\n", area1);

printf("digite a area2: ");
scanf("%f", &area2);
printf("a area2 é: %f\n", area2);

printf("digite o pib1: ");
scanf("%f", &pib1);
printf("a area2 é: %f\n", pib1);

printf("digite o pib2: ");
scanf("%f", &pib2);
printf("a area2 é: %f\n", pib2);

printf("digite o Pturisticos1: ");
scanf("%d", &Pturisticos1);
printf("os Pturisticos1 é: %d\n", Pturisticos1);

printf("digite o Pturisticos2: ");
scanf("%d", &Pturisticos2);
printf("os Pturisticos2 é: %d\n", Pturisticos2);

printf("Densidade1: %.2f\n", densidade1);

printf("Densidade2: %.2f\n", densidade2);



int opcao;



   printf("*** Super Trunfo Aventureiro ***\n");

   printf("Escolha o atributo a ser comparado\n");



   printf("1. População\n");

   printf("2. Area\n");

   printf("3. PIB\n");

   printf("4. Pontos Turisticos\n");

   printf("5. Densidade Populacional\n");

   scanf("%d", &opcao);



   //Aplicação do Switch e If-else-If



   switch (opcao)

   {

   case 1:

   

   if(populacao1 > populacao2)

    {

        printf("População de Carta 1 venceu");



    }else if(populacao1 < populacao2){



        printf("População de Carta 2 venceu");



    }else{



        printf("Empate");

    }

    break;



    case 2:

 

    if(area1 > area2)

    {

        printf("Area de Carta 1 venceu");



    }else if(area1 < area2){



        printf("Area de Carta 2 venceu");



    }else{



        printf("Empate");

    }



    break;



    case 3:

 

    if(pib1 > pib2)

    {

        printf("PIB de Carta 1 venceu");



    }else if(pib1 < pib2){



        printf("PIB de Carta 2 venceu");



    }else{



        printf("Empate");

    }

    break;



    case 4:



    if(Pturisticos1 > Pturisticos2)

    {

        printf("Pontos Turisticos de Carta 1 venceu");



    }else if(Pturisticos1 < Pturisticos2){



        printf("Pontos Turisticos de Carta 2 venceu");



    }else{



        printf("Empate");

    }



    break;



    case 5:



    if(densidade1 < densidade2)

    {

        printf("Densidade populacional de Carta 1 venceu");



    }else if(densidade1 > densidade2){



        printf("Densidade populacional de Carta 2 venceu");



    }else{


 printf("Empate");

    }

    break;

 default:

   printf("Opção inválida");

   
 break;



}

}
