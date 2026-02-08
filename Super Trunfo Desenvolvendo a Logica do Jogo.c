#include <stdio.h>

// Desafio Super Trunfo - Países
// Nivel Novato - Comparação de Cartas (1 atributo fixo)
// Autor: Luciano Alves 
// Matricula:202505246146
// Data: 08/02/2026




int main() {

    // ================= Carta 1 =================
    char estadoCarta1;
    char codigoCarta1[20];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variáveis calculadas Carta 1
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;


    // ================= Carta 2 =================
    char estadoCarta2;
    char codigoCarta2[20];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

     //Variáveis calculadas Carta 2
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;


    // ========= Entrada de dados da Carta 1 =========
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estadoCarta1);

    printf("Codígo da Carta(ex: A01):");
    scanf(" %s", &codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf(" %lu", &populacao1);

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
    scanf(" %lu", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);
    
    printf("PIB (em Bilhões de Reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // ======= Cálculos ======
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // ====== Exibição dos dados ======
    printf("\n=== Cartas cadastradas ===\n");


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f Reais\n\n", pibPerCapita1);
    


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f Reais\n\n", pibPerCapita2);
   
    


    // ======= Super Poder =======
    superPoder1 =
      (float)populacao1 +
      area1 +
      pib1 +
      pontosTuristicos1 +
      pibPerCapita1 +
      (1.0f / densidadePopulacional1);

    superPoder2 = 
      (float)populacao2 +
      area2 +
      pib2 +
      pontosTuristicos2 +
      pibPerCapita2 +
      (1.0f / densidadePopulacional2);

    // ====== Comparações de Cartas (Nível Novato)  ======
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Atributo utilizado: Populacao\n\n");

    printf("Carta 1 - %s (%c): %lu habitantes\n\n", nomeCidade1, estadoCarta1, populacao1);
    
    printf("Carta 2 - %s (%c): %lu habitantes\n\n", nomeCidade2, estadoCarta2, populacao2);

    if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
      printf("Resultado: Empate!\n");

    }

      
    return 0;


} 
