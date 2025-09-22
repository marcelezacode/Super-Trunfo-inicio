# include <stdio.h>
int main(){

    //Dados Carta 1 (Manaus - Amazonas)
    char estado1 [30] = "Amazonas";
    char cidade1 [30] =   "Manaus";
    char codigo1  [5] =      "A01";
    unsigned long int populacao1 = 22195580;
    float area1 = 11401.0;
    double pib1 =    82.3;    //em bilhoes
    int pontos1  =      20;
    float densidade1 = populacao1 / area1; 
    double pib_percapita1 = pib1 * 1e9 / populacao1;
    float Super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_percapita1 + (1.0/densidade1);
     
    //Dados Carta 2 (Recife - Pernambuco)
    char estado2 [30] = "Pernambuco";
    char cidade2 [30] =     "Recife";
    char codigo2  [5] =        "B02";
    unsigned long int populacao2 = 1653461;
    float area2 = 218.5;
    double pib2 =  88.7;     //em bilhoes
    int pontos2  =    25;
    float densidade2 = populacao2 / area2; 
    double pib_percapita2 = pib2 * 1e9 / populacao2;
    float Super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_percapita2 + (1.0/densidade2);

    int escolha, resultado;
    int pontosCarta1 = 0, pontosCarta2 = 0; //placar final

    printf("=== Super Trunfo ===\n");
    printf("Escolha uma carta:\n");
    printf("1 - %s(%s)\n", cidade1, estado1);
    printf("2 - %s(%s)\n", cidade2, estado2);
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n=== Dados das Cartas ===\n");
    printf("Carta1 -> %s(%s-%s)\n", cidade1, estado1, codigo1);  
    printf("Pop: %lu |Area: %.2f |PIB: %.2f |Pts: %d |Densidade: %.2f |PIB per capita: %.2lf |Super Poder: %.2f\n\n",populacao1, area1, pib1,
           pontos1, densidade1, pib_percapita1, Super_poder1);

    printf("Carta2 -> %s(%s-%s)\n", cidade2, estado2, codigo2);  
    printf("Pop: %lu |Area: %.2f |PIB: %.2f |Pts: %d |Densidade: %.2f |PIB per capita: %.2lf |Super Poder: %.2f\n\n",populacao2, area2, pib2,
           pontos2, densidade2, pib_percapita2, Super_poder2);

           //Comparacoes usando a variavel resulatado
    printf("=== Comparacoes ===\n");
    resultado = (populacao1 > populacao2);
    printf("populacao: Carta1 venceu? %d\n", resultado);
    resultado = (area1 > area2);
    printf("Area: Carta1 venceu? %d\n", resultado);
    resultado = (pib1 > pib2);
    printf("PIB: Carta1 venceu? %d\n",resultado);
    resultado = (pontos1 > pontos2);
    printf("Pontos Turisticos: Carta1 venceu? %d\n", resultado);
    resultado = (pib_percapita1 > pib_percapita2);
    printf("PIB per capita: Carta1 venceu? %d\n", resultado);
    resultado = (densidade1 > densidade2);
    printf("Densidade Populacional: Carta1 venceu? %d\n", resultado);

    //Resultado final (Opcional)
    if (escolha == 1) {
    printf("\nVoce escolheu a carta de %s!\n", cidade1);
    } else if (escolha == 2) {
    printf("\nVoce escolheu a carta de %s!\n", cidade2);
    } else { 
    printf("\nOpcao invalida\n");
    }
    return 0;
}
    
    



    


