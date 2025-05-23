#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Super Trunfo em c

int main() {
    // Declaração das variáveis
    char estado;
    char codigoCarta[5] = "";
    char nomeCidade[30] = "";
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePop;
    float pibPerCapita;


    
    // CARTA 1 - Cadastro dos dados
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

    // Calculo da Densidade Populacional
    densidadePop = (float) populacao / area;

    // Calculo do PIB Per Capita
    pibPerCapita = (float) pib / populacao;


    // CARTA 1 - Exibição dos dados
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibPerCapita);



    // CARTA 2 - Cadastro dos dados
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

    // Calculo da Densidade Populacional
    densidadePop = (float) populacao / area;

    // Calculo do PIB Per Capita
    pibPerCapita = (float) pib / populacao;


    // CARTA 2 - Exibição dos dados
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibPerCapita);


    return 0;
}
