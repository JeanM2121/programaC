#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 

 
 int main(){
      
    //carta 1
    
    char opcaomenu;
    char nomedojogador[30];
    char codigo[20];
    char pais1[20];
    unsigned long int populacao1;
    float area1;
    float pib;
    int pontosturisticos;
    float densidadepopulacional1;
    float pibpercapita1;
   float somadosatributos;
    
     //carta 2
     
    char codigo2[20];
    char pais2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float somadosatributos2;
     
// inicio do jogo
     printf("Seja Bem Vindo ao Super Trunfo! \n");
     printf("Digite seu nome: \n");
     scanf("%s", &nomedojogador);
     printf("Seja Bem Vindo, %s!\n", nomedojogador);
 
     printf("Digite o nome do pais: \n");
     scanf("%s", pais1);
 
     printf("Digite a população desse país: \n");
     scanf("%d", &populacao1);
 
     printf("Digite a area do país: \n");
     scanf("%f", &area1);
 
     printf("Digite o PIB do país: \n");
     scanf("%f", &pib);
 
     printf("Digite o numero de pontos turisticos: \n");
     scanf("%d", &pontosturisticos);
  
  //calculo da densidade, pib per capita e soma dos produtos;
 
     densidadepopulacional1 = (float)populacao1 / area1;
     pibpercapita1 = (pib * 1000000000) / (float)populacao1;

     somadosatributos = (float) populacao1 + pib + area1 + pontosturisticos + densidadepopulacional1 + pibpercapita1;
 
     printf("** Vamos cadastrar a segunda carta , %s :) \n",nomedojogador);
 
     printf("Digite o nome de outro país: \n");
     scanf("%s", pais2);
 
     printf("Digite a população desse país: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a area do país: \n");
     scanf("%f", &area2);
 
     printf("Digite o PIB do país: \n");
     scanf("%f", &pib2);
 
     printf("Digite o numero de pontos turisticos: \n");
     scanf("%d", &pontosturisticos2);
 
  //calculo da densidade, pib per carpita e soma dos produtos
     
     densidadepopulacional2 = (float)populacao2 / area2;
     pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

     somadosatributos2 = (float) populacao2 + pib2 + area2 + pontosturisticos2 + densidadepopulacional2 + pibpercapita2;
    
     printf("\n");
     printf("\n");

     printf(" CARTA 1 \n");  
     printf("Nome do País : %s \n", pais1);
     printf("População : %d \n", populacao1);
     printf("Área : %.2f \n ", area1);
     printf("PIB : %.2f \n", pib);
     printf("Números de Pontos Turísticos : %d \n", pontosturisticos);
     printf("Densidade Demográfica : %.2f \n", densidadepopulacional1);
     printf("PIB per capita : %.2f \n ", pibpercapita1);
     printf("soma dos atributos é : %.2f \n ", somadosatributos);
     
 
     printf("\n");
     printf("\n");
     
     printf(" CARTA 2 \n");
     printf("Nome do País : %s \n", pais2);
     printf("População : %d \n", populacao2);
     printf("Área : %.2f km² \n ", area2);
     printf("PIB : %.2f bilhões de reais\n", pib2);
     printf("Números de Pontos Turísticos : %d \n", pontosturisticos2);
     printf("Densidade Demográfica : %.2f hab.km²\n", densidadepopulacional2);
     printf("PIB per capita : %.2f reais \n", pibpercapita2);
     printf("soma dos atributos2 é : %2f \n ", somadosatributos2);
 
     printf("\n");
     printf("\n");
 //Menu interativo;
     printf("## MENU INTERATIVO DE COMPARAÇÃO ##\n");
     printf("Escolha o atributo que deseja comparar: \n");
     printf("1 - População \n");
     printf("2 - Área \n");
     printf("3 - PIB \n");
     printf("4 - Número de Pontos Turísticos \n");
     printf("5 - Densidade Populacional \n");
     printf("6 - soma dos atributos \n");
     printf(" Digite a opção desejada: %d", opcaomenu);
     scanf("%d", &opcaomenu);

  //Todas as opções de comparação do 1 ao 6;
        
     if (opcaomenu == 1){
         if (populacao1 > populacao2){
             printf(" O pais %s GANHOU ",pais1,populacao1,pais2,populacao2);
         }else if (populacao1 < populacao2){
             printf(" O pais %s GANHOU ",pais2,populacao2,pais1,populacao1);
         }else{
             printf(" Os dois países tem a mesma população de %d ", populacao1);
         }
        }else if (opcaomenu ==2){
            if (area1 > area2){
                printf(" O pais %s GANHOU ",pais1,area1,pais2,area2);
            }else if (area1 < area2){
                printf(" O pais %s GANHOU ",pais2,area2,pais1,area1);
            }else{
                printf(" Os dois países tem a mesma área de %.2f ", area1);
            }
        }else if (opcaomenu ==3){
            if (pib > pib2){
                printf(" O pais %s GANHOU ",pais1,pib,pais2,pib2);
            }else if (pib < pib2){
                printf(" O pais %s GANHOU ",pais2,pib2,pais1,pib);
            }else{
                printf(" Os dois países tem o mesmo PIB de %.2f ", pib);
            }
        }else if (opcaomenu ==4){
            if (pontosturisticos > pontosturisticos2){
                printf(" O pais %s GANHOU ",pais1,pontosturisticos,pais2,pontosturisticos2);
            }else if (pontosturisticos < pontosturisticos2){
                printf(" O pais %s GANHOU ",pais2,pontosturisticos2,pais1,pontosturisticos);
            }else{
                printf(" Os dois países tem o mesmo número de pontos turísticos de %d ", pontosturisticos);
            }
        }else if (opcaomenu ==5){
            if (densidadepopulacional1 < densidadepopulacional2){
                printf(" O pais %s GANHOU ",pais1,densidadepopulacional1,pais1,densidadepopulacional2);
            }else if (densidadepopulacional1 < densidadepopulacional2){
                printf(" O pais %s GANHOU ",pais2,densidadepopulacional2,pais1,densidadepopulacional1);
            }else{
                printf(" Os dois países tem a mesma densidade populacional de %.2f ", densidadepopulacional1);
            }

        }else if (opcaomenu ==6){
            if (somadosatributos > somadosatributos2){
                printf(" O pais %s GANHOU ",pais1,somadosatributos,pais1,somadosatributos2);
            }else if (somadosatributos < somadosatributos2){
                printf(" O pais %s GANHOU ",pais2,somadosatributos2,pais1,somadosatributos);
            }else{
                printf(" Os dois países tem a mesma densidade populacional de %.2f ", somadosatributos);
            }

       }else{
            printf(" Opção inválida! \n");
            printf(" Você digitou a opção %d, mas as opções válidas são de 1 a 6. \n", opcaomenu);
            printf(" Por favor, digite uma opção válida. \n");
            printf(" Jogo encerrado!, %s! \n", nomedojogador);
    
    }


    return 0;
        }
