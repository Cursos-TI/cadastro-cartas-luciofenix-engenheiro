#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro - Menu Interativo e Lógica Complexa
// Autor: Luciano Alves 
// Matricula: 202505246146

int main() {
    // ================= Variáveis Carta 1 =================
    char estadoCarta1, codigoCarta1[20], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    int pontosTuristicos1;

    // ================= Variáveis Carta 2 =================
    char estadoCarta2, codigoCarta2[20], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    int pontosTuristicos2;

    int opcao; // Variável para o menu

    // ========= Entrada de dados da Carta 1 =========
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): "); scanf(" %c", &estadoCarta1);
    printf("Codigo da Carta (ex: A01): "); scanf(" %s", codigoCarta1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: "); scanf(" %lu", &populacao1);
    printf("Area (km2): "); scanf(" %f", &area1);
    printf("PIB (em Bilhoes): "); scanf(" %f", &pib1);
    printf("Pontos Turisticos: "); scanf(" %d", &pontosTuristicos1);

    // ========= Entrada de dados da Carta 2 =========
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): "); scanf(" %c", &estadoCarta2);
    printf("Codigo da Carta (ex: B02): "); scanf(" %s", codigoCarta2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: "); scanf(" %lu", &populacao2);
    printf("Area (km2): "); scanf(" %f", &area2);
    printf("PIB (em Bilhoes): "); scanf(" %f", &pib2);
    printf("Pontos Turisticos: "); scanf(" %d", &pontosTuristicos2);

    // ======= Cálculos de Atributos =======
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // ================= MENU INTERATIVO =================
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n========================================\n");
    printf("        RESULTADO DA COMPARACAO         \n");
    printf("========================================\n");

    // Lógica de Comparação usando Switch e IF-ELSE aninhado
    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %lu | %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("VENCEDOR: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("VENCEDOR: %s\n", nomeCidade2);
            else printf("EMPATE!\n");
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km2 | %s: %.2f km2\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("VENCEDOR: %s\n", nomeCidade1);
            else if (area2 > area1) printf("VENCEDOR: %s\n", nomeCidade2);
            else printf("EMPATE!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bi | %s: R$ %.2f bi\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("VENCEDOR: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("VENCEDOR: %s\n", nomeCidade2);
            else printf("EMPATE!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d | %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("VENCEDOR: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("VENCEDOR: %s\n", nomeCidade2);
            else printf("EMPATE!\n");
            break;

        case 5: // Densidade (MENOR VALOR VENCE)
            printf("Atributo: Densidade Demografica (Menor vence!)\n");
            printf("%s: %.2f hab/km2 | %s: %.2f hab/km2\n", nomeCidade1, densidadePopulacional1, nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) printf("VENCEDOR: %s\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1) printf("VENCEDOR: %s\n", nomeCidade2);
            else printf("EMPATE!\n");
            break;

        default:
            printf("Opcao invalida selecionada.\n");
    }

    printf("========================================\n");

    return 0;
}