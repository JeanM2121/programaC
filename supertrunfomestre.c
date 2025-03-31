#include <stdio.h>
//carta 1

int main(){
    char estado;
    char codigo[20];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float Pib;
    int pontos_turisticos;

//carta 2
    
    char estado2;
    char codigo2[20];
    char cidade2[20];
    unsigned long int populacao2;
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

printf("digite a populacao: ");
scanf("%lu", &populacao);
printf("a populacao é: %lu\n", populacao); 

printf("digite a area: ");
scanf("%f", &area);
printf("a area é: %f\n", area);

printf("digite o Pib: ");
scanf("%f", &Pib);
printf("o Pib é: %f\n", Pib);

printf("digite os pontos turisticos: ");
scanf("%d", &pontos_turisticos);
printf("os pontos turisticos são: %d\n", pontos_turisticos);

float densidade = (float) (populacao / area);
float pib_per_capita = (float) (Pib / populacao);

printf("Densidade: %.2f\n", densidade);

printf("pib per capita: %.2f\n", pib_per_capita);

//Super Poder!!!

unsigned long int soma = (unsigned long int) (populacao + Pib + area + pontos_turisticos + densidade + pib_per_capita);

printf("a soma é: %lu\n", &soma);

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

printf("digite a populacao2: ");
scanf("%lu", &populacao2);
printf("a população é: %lu\n", populacao2);

printf("digite a area2: ");
scanf("%f", &area2);
printf("a area é: %f\n", area2);

printf("digite o Pib2: ");
scanf("%f", &Pib2);
printf("o Pib é: %f\n", Pib2);

printf("digite os pontos turisticos2: ");
scanf("%d", &pontos_turisticos2);
printf("os pontos turisticos são: %d\n", pontos_turisticos2);

float densidade2 = (float) (populacao2 / area2);
float pib_per_capita2 = (float) (Pib2 / populacao2);

printf("Densidade: %.2f\n", densidade2);

printf("pib per capita: %.2f\n", pib_per_capita2);

//Super Poder!!!

unsigned long int soma2 = (unsigned long int) (populacao2 + Pib2 + area2 + pontos_turisticos2 + densidade2 + pib_per_capita2);

printf("a soma é: %lu\n", &soma2);

//comparação carta 1 e carta 2

    if(populacao > populacao2){

    printf("populacao de carta 1 venceu\n");

}else 
    
    if(populacao < populacao2){
    
     printf("populacao2 de Carta 2 venceu\n");
    
}else{
    
    printf("Empate\n");
    
    }
    
    if(area > area2){
    
     printf("area de Carta 1 venceu\n");
    
}else 
        
    if(area < area2){
      
     printf("area2 de Carta 2 venceu\n");
    
}else{
    
     printf("Empate\n");
    
        }
    
    if(Pib > Pib2){
    
     printf("Pib de Carta 1 venceu\n");
    
}else 
            
    if(Pib < Pib2){
          
     printf("Pib2 de Carta 2 venceu\n");
        
}else{
        
     printf("Empate\n");
    
}

    if(pontos_turisticos > pontos_turisticos2){
    
     printf("pontos turisticos de Carta 1 venceu\n");
            
 }else
                
    if(pontos_turisticos < pontos_turisticos2){
              
     printf("pontos turisticos2 de Carta 2 venceu\n");
            
}else{
            
     printf("Empate\n");

}
            
    if(densidade < densidade2){
    
     printf("densidade de Carta 1 venceu\n");
                
 }else 
                    
    if(densidade > densidade2){
                  
     printf("densidade2 de Carta 2 venceu\n");
                
 }else{
                
     printf("Empate\n");
 
 }   

    if(pib_per_capita > pib_per_capita2){
    
     printf("pib per capita de Carta 1 venceu\n");
                
 }else 
                    
    if(pib_per_capita < pib_per_capita2){
                  
     printf("pib per capita2 de Carta 2 venceu\n");
                
 }else{
                
     printf("Empate\n");

 }
     
     return 0;

}
