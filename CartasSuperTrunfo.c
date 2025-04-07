#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Estados
// Nível Novato - Cadastro de duas cartas
/* Nesta parte, o programa dará a possibilidade do usuário cadastrar duas cartas. Cada uma delas 
terá informações referentes a uma cidade*/
// Teste Alex Lima

int main() {
    /* Passo 1 - Definir as variáveis da cidade, como: código, nome, população, área, PIB
    e número de pontos turísticos */

    char codigoEstado1; /* A ser preenchida com as letras de A a H, sendo que cada uma representa 
                        um estado - Carta 1 */
    char codigoCarta1[5]; /* Representa o código individual dado à carta, sempre começando pela
                            letra que representa o estado. Ex.: A01, B03, C05, etc - Carta 1*/
    char nomeCidade1[30]; /* A ser preenchida com o nome da cidade - Carta 1*/
    int populacao1; /* Representa a quantidade de habitantes da cidade - Carta 1*/
    float area1; /* Representa a área da cidade em km2 - Carta 1*/
    float pib1; /* Representa o PIB da cidade -Carta 1*/
    int pontosTuristicos1; /* Representa o número de pontos turísticos na cidade - Carta 1*/


    char codigoEstado2; /* A ser preenchida com as letras de A a H, sendo que cada uma represents 
                        um estado - Carta 2*/
    char codigoCarta2[5]; /* Representa o código individual dado à carta, sempre começando pela
                            letra que representa o estado. Ex.: A01, B03, C05, etc - Carta 2*/
    char nomeCidade2[30]; /* A ser preenchida com o nome da cidade - Carta 2*/
    int populacao2; /* Representa a quantidade de habitantes da cidade - Carta 2*/
    float area2; /* Representa a área da cidade em km2 - Carta 2*/
    float pib2; /* Representa o PIB da cidade - Carta 2*/
    int pontosTuristicos2; /* Representa o número de pontos turísticos na cidade - Carta 2*/


    /* Agora serão feitas as solicitações de entrada, para a carta 1, para os usuários. 
    Após cada solicitação, o programa guarda o valor fornecido, pelo usuário, na variável
    correspondente */

    printf("Insira o código do estado para carta 1 (uma letra entre A e H que represente o estado):");
    scanf("%c", &codigoEstado1);
    getchar();
    printf("Insira o código da carta para carta 1 (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta1, 5, stdin);
    codigoCarta1[strcspn(codigoCarta1, "\n")] = 0;
    printf("Insira o nome da cidade para carta 1: ");    
    fgets(nomeCidade1, 30, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade para carta 1:");
    scanf("%i", &populacao1);
    printf("Insira a área da cidade para carta 1(em km2):");
    scanf("%f", &area1);
    printf("Insira o PIB da ciade para carta 1:");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turísticos da cidade para carta 1:");
    scanf("%i", &pontosTuristicos1);
    

    /* Agora serão informadas as saídas, para a carta 1*/
    printf("\nCódigo de estado (carta 1): %c \n", codigoEstado1);
    printf("Código de carta (carta 1): %s \n", codigoCarta1);
    printf("Cidade (carta 1): %s\n", nomeCidade1);
    printf("Habitantes (carta 1): %i\n", populacao1);
    printf("Área em km2 (carta 1) %.2f\n", area1);
    printf("PIB (carta 1): %.2f\n", pib1);
    printf("Quantidade de pontos turísticos (carta 1): %i\n\n\n", pontosTuristicos1);

    /* Agora serão feitas as solicitações de entrada, para a carta 2, para os usuários. 
    Após cada solicitação, o programa guarda o valor fornecido, pelo usuário, na variável
    correspondente */

    getchar();
    printf("Insira o código do estado para carta 2 (uma letra entre A e H que represente o estado):");
    scanf("%c", &codigoEstado2);
    getchar();
    printf("Insira o código da carta para carta 2 (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta2, 5, stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;
    printf("Insira o nome da cidade para carta 2: ");    
    fgets(nomeCidade2, 30, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade para carta 2:");
    scanf("%i", &populacao2);
    printf("Insira a área da cidade para carta 2(em km2):");
    scanf("%f", &area2);
    printf("Insira o PIB da ciade para carta 2:");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos da cidade para carta 2:");
    scanf("%i", &pontosTuristicos2);
    

    /* Agora serão informadas as saídas, para a carta 1*/
    printf("\nCódigo de estado (carta 2): %c \n", codigoEstado2);
    printf("Código de carta (carta 2): %s \n", codigoCarta2);
    printf("Cidade (carta 2): %s\n", nomeCidade2);
    printf("Habitantes (carta 2): %i\n", populacao2);
    printf("Área em km2 (carta 2) %.2f\n", area2);
    printf("PIB (carta 2): %.2f\n", pib2);
    printf("Quantidade de pontos turísticos (carta 2): %i\n\n\n", pontosTuristicos2);


    return 0;
}
