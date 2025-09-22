#include <stdio.h>
#include <string.h>

struct Carta{
       char estado[20];
       char cidade[30];
       char codigo[5];
       unsigned long int populacao;
       float area;
       float pib;
       int pontosTuristicos;
       float densidade;
       float pibPerCapita;
       float superPoder;
};
 int main(){
       struct  Carta carta1, carta2;

       // Definicao das cartas (apenas exemplo fixo, pode trocar depois)
       strcpy(carta1.estado, "Amazonas");
       strcpy(carta1.cidade,   "Manaus");
       strcpy(carta1.codigo,      "A01");
       carta1.populacao = 2200000;
       carta1.area     = 11401.0;
       carta1.pib     = 100000.0;
       carta1.pontosTuristicos = 12;

       strcpy(carta2.estado, "Pernambuco");
       strcpy(carta2.cidade,   "Recife");
       strcpy(carta2.codigo,      "B02");
       carta2.populacao = 1600000;
       carta2.area     = 2189.0;
       carta2.pib     = 85000.0;
       carta2.pontosTuristicos = 20;

       // Calculos derivados
       carta1.densidade = (float)carta1.populacao / carta1.area;
       carta2.densidade = (float)carta2.populacao / carta2.area;

       carta1.pibPerCapita = carta1.pib * 1000000 / carta1.populacao; // PIB esta em milhoes
       carta2.pibPerCapita = carta2.pib * 1000000 / carta2.populacao;

       carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos +
                           carta1.pibPerCapita + (1/ carta1.densidade);
       carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos +
                           carta2.pibPerCapita + (2/ carta1.densidade);    
                           
       // Placar
       int pontosCarta1 = 0, pontosCarta2 = 0;
       // Comparacoes
       printf("\n===== Comparacoes =====\n");

       //Populacao
       if (carta1.populacao > carta2.populacao) {
            printf("Populacao: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else { 
            printf("Populacao: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }
      
       // Area
       if (carta1.area > carta2.area) {
            printf("Area: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else {
            printf("Area: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }      

       // PIB
       if (carta1.pib > carta2.pib) {
            printf("PIB: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else {
            printf("PIB: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }   
      
       // Pontos turisticos
       if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
            printf("Pontos turisticos: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else {
            printf("Pontos turisticos: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }   
      
       // PIB per capita
       if (carta1.pibPerCapita > carta2.pibPerCapita) {
            printf("PIB per capita: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else {
            printf("PIB per capita: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }      

       // Densidade (menor vence)
       if (carta1.densidade > carta2.densidade) {
            printf("densidade: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else {
            printf("densidade: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }  
       
       // Super Poder
       if (carta1.superPoder > carta2.superPoder) {
            printf("Super Poder: Carta 1 venceu (1)\n");
            pontosCarta1++;
       } else {
            printf("Super Poder: Carta 2 venceu (1)\n");
            pontosCarta2++;
       }  
       // Resultado final
       printf("\n=====Resultado da Rodada =====\n");
       printf("Carta 1 fez %d Pontos\n", pontosCarta1);
       printf("Carta 2 fez %d Pontos\n", pontosCarta2);
      
       if (pontosCarta1 > pontosCarta2)  {
            printf(">>> Carta 1 venceu a rodada!\n");
       } else if (pontosCarta2 > pontosCarta1) {
            printf(">>> Carta 2 venceu a rodada!\n");
       } else { 
            printf(">>> Empate na radada!\n");
       }

       return 0;
 }