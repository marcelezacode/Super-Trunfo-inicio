#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
#include <stdio.h>
//Defindo a estrutura da carta
typedef struct{ 

    char estado;          //Letra de 'A' a 'H'
    char codigo[10];      //Ex: A01 (3chars + 10)
    char cidade[50];      //Nome dA Cidade
    int populacao;        //Numero de habitantes
    float area;           //Area em Km²
    float pib;            //Produto interno Bruto
    int pontosTuristicos; //Numero de pontod turisticos

}Carta;
int main() {
     Carta carta1, carta2;
    print("=== Cadastro de Cartas do Super Trunfo ===\n");
    //Cadastro da primeira Carta
    
    printf("Cadastro da primeira carta\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo da carta(ex. A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    getchar(); // Limpar buffer
    fgetc(carta1.cidade, sizeof(carta1.cidade), stdin);
    printf("Populacao:");
    scanf("%d", &carta1.populacao);
    printf("Area (Km²):");
    scanf("%f", &carta1.area);
    printf("PIB:");
    sacnf("%f", &carta1.pib);
    printf("Numero de pontos Turisticos:");
    scanf("%d", &carta1.pontosTuristicos);
    printf("\n");
    //Cadastro da segunda Carta

    printf("cadastro da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf("%c", &carta2.estado);
    printf("Codigo da carta(ex: A01):");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    getchar(); // Limpar buffer
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    printf("Populacao:");
    scanf("%d", &carta2.populacao);
    prinf("Area (Km²):");
    scanf("%f", &carta2.area);
    printf("PIB:");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos Turisticos:");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta1:\n");
    printf("Estado:%c\n", carta1.estado);
    printf("Codigo:%s\n", carta1.codigo);
    printf("Cidade:%s", carta1.cidade);
    printf("Populacao:%d\n", carta1.populacao);
    printf("Populacao:%d\n", carta1.populacao);
    printf("Area:%F kM²\n", carta1.area);
    printf("PIB:%f\n",carta1.pib);
    printf("Pontos turisticos:%d\n", carta1.pontosTuristicos);

    printf("\nCarta2:\n");
    printf("Estado:%c\n", carta2.estado);
    printf("Codigo:%s\n", carta2.codigo);
    printf("Cidade:%s", carta2.cidade);
    printf("Populacao:%d\n", carta2.populacao);
    printf("Area:%f Km²\n", carta2.area);
    printf("PIB:%f\n", carta2.pib);
    printf("Pontros turisticos:%d\n", carta2.pontosTuristicos);

    return 0;
}