#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado = 'A';
    char codigoCarta[5] = "";
    char nomeCidade[30] = "";
    int populacao = 1;
    float area = 1;
    float pib = 1;
    int pontosTuristicos = 1;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // CARTA 1
    printf("Cadastro da Carta 1\n");
    printf("Digite a letra - de A a H - para identificar o Estado: ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta - formada pela letra do Estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // CARTA 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite a letra - de A a H - para identificar o Estado: ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta - formada pela letra do Estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);


    return 0;
}
