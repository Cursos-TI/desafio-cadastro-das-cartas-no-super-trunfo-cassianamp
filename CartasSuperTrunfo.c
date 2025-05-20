#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigoCarta[3];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a letra - de A a H - para identificar o Estado: ");
    scanf("%c", &estado);
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
    printf("Carta 1\n");
    printf("Estado: \n", estado);
    printf("Código: \n", codigoCarta);
    printf("Nome da Cidade: \n", nomeCidade);
    printf("População: \n", populacao);
    printf("Área: \n", area);
    printf("PIB: \n", pib);
    printf("Número de Pontos Turísticos: \n", pontosTuristicos);

    return 0;
}
