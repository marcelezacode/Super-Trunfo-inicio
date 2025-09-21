#include <stdio.h>

int main(){
    //Dados da Carta 1 (Manaus - Amazonas)

    char estado1 [30] = "Amazonas";
    char cidade1 [30] = "Manaus";
    char codigo1  [5]  = "A01";
    float populacao1  = 32063547;     //habitantes
    float area1       =    11401;     //area Km²
    float pib1        =     76.6;     //bilhoes de R$
    float pontos1     =       15;     //Pontos Turisticos
    
    //Dados da Carta 2 (Recife - Pernambuco)

    char estado2 [30] = "Pernambuco";
    char cidade2 [30] = "Recife";
    char codigo2  [5]  = "A02";
    float populacao2  = 1653461;      //habitantes
    float area2       =     218;      //area Km²
    float pib2        =    77.9;      //bilhoes de R$
    float pontos2     =      22;      //Pontos Turisticos

    //Calculos
    float densidade1 = populacao1 / area1;
    float pib_percapita1 = (pib1 * 1000000000) / populacao1;
    float densidade2 = populacao2 / area2;
    float pib_percapita2 = (pib2 * 1000000000) / populacao2;

    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.0f habitantes\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhoes de R$\n", pib1);
    printf("Pontos Turisticos: %.0f\n", pontos1);
    printf("Desidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB percapita: %.2f R$\n", pib_percapita1);
    
    printf("=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %.0f habitantes\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de R$\n", pib2);
    printf("Pontos Turisticos: %.0f\n", pontos2);
    printf("Desidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB percapita: %.2f R$\n", pib_percapita2);
    
    return 0;
    
}