#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Nível Novato: Cadastro de duas cartas representando cidades
// Autor: Luciano Alves Matricula:202505246146
// Data: 21/01/2026



int main() {

    // ================= Carta 1 =================
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variáveis calculadas Carta 1
    float densidadePopulacional1;
    float pibPerCapita1;

    // ================= Carta 2 =================
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

     //Variáveis calculadas Carta 2
    float densidadePopulacional2;
    float pibPerCapita2;


    // ========= Entrada de dados da Carta 1 =========
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estadoCarta1);

    printf("Codígo da Carta(ex: A01):");
    scanf(" %s", &codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em Bilhões de Reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // ========= Entrada de dados da Carta 2 =========
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estadoCarta2);

    printf("Codígo da Carta(ex: B02): ");
    scanf(" %s", &codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);
    
    printf("PIB (em Bilhões de Reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // ======= Cálculos ======
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

   
    // ====== Exibição dos dados ======
    printf("\n=== Cartas cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB pr Capita: %.2f Reais\n", pibPerCapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB pr Capita: %.2f Reais\n", pibPerCapita2);
    

    return 0;


} 
