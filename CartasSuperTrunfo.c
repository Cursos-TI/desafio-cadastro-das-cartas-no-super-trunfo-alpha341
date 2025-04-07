#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Nível Novato - Cadastro de duas cartas
/* Nesta parte, o programa dará a possibilidade do usuário cadastrar duas cartas. Cada uma delas 
terá informações referentes a uma cidade*/
// Teste Alex Lima

int main() {
    /* Passo 1 - Definir as variáveis da cidade, como: código, nome, população, área, PIB
    e número de pontos turísticos */

    char codigoEstado; /* A ser preenchida com as letras de A a H, sendo que cada uma represents 
                        um estado */
    char codigoCarta[5]; /* Representa o código individual dado à carta, sempre começando pela
                            letra que representa o estado. Ex.: A01, B03, C05, etc */
    char nomeCidade[30]; /* A ser preenchida com o nome da cidade */
    int populacao; /* Representa a quantidade de habitantes da cidade */
    float area; /* Representa a área da cidade em km2 */
    float pib; /* Representa o PIB da cidade */
    int pontosTuristicos; /* Representa o número de pontos turísticos na cidade */


    /* Agora serão feitas as solicitações de entrada, para a carta 1, para os usuários. 
    Após cada solicitação, o programa guarda o valor fornecido, pelo usuário, na variável
    correspondente */

    printf("Insira o código do estado (uma letra entre A e H que represente o estado):");
    scanf("%c", &codigoEstado);
    getchar();
    printf("Insira o código da carta (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta, 5, stdin);
    printf("Insira o nome da cidade: ");
    codigoCarta[strcspn(codigoCarta, "\n")] = 0;
    fgets(nomeCidade, 30, stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade:");
    scanf("%i", &populacao);
    printf("Insira a área da cidade (em km2):");
    scanf("%f", &area);
    printf("Insira o PIB da ciade:");
    scanf("%f", &pib);
    printf("Insira a quantidade de pontos turísticos da cidade:");
    scanf("%i", &pontosTuristicos);
    

    /* Agora serão informadas as saídas, para a carta 1*/
    printf("\nCódigo de estado (carta 1): %c \n", codigoEstado);
    printf("Código de carta (carta 1): %s \n", codigoCarta);
    printf("Cidade (carta 1): %s\n", nomeCidade);
    printf("Habitantes (carta 1): %i\n", populacao);
    printf("Área em km2 (carta 1) %.3f\n", area);
    printf("PIB (carta 1): %.3f\n", pib);
    printf("Quantidade de pontos turísticos (carta 1): %i\n\n\n", pontosTuristicos);


    return 0;
}
