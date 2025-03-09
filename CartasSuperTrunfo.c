#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main() {
    
    char Estado1[50];  
    char CodigoDaCarta1[10];
    char NomeDaCidade1[100];
    int Populacao1;
    int NumeroDePontosTuristicos1;
    float Pib1;
    float AreaEmKm1;

    char Estado2[50];
    char CodigoDaCarta2[10];
    char NomeDaCidade2[100];
    int Populacao2;
    int NumeroDePontosTuristicos2;
    float Pib2;
    float AreaEmKm2;

    // Cadastro das Cartas:
    printf("Digite o Estado da carta 1: \n");
    scanf("%49s", Estado1); 

    printf("Digite o código da carta 1: \n");
    scanf("%9s", CodigoDaCarta1);

    printf("Digite o Nome da cidade 1: \n");
    scanf("%99s", NomeDaCidade1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &Populacao1);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &Pib1);

    printf("Digite a área em km² da cidade 1: \n");
    scanf("%f", &AreaEmKm1);

    // Exibição dos Dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);
    printf("PIB: %.2f\n", Pib1);
    printf("Área em km²: %.2f\n", AreaEmKm1);

    // Cadastro da Carta 2:
    printf("\nDigite o Estado da carta 2: \n");
    scanf("%49s", Estado2); 

    printf("Digite o código da carta 2: \n");
    scanf("%9s", CodigoDaCarta2);

    printf("Digite o Nome da cidade 2: \n");
    scanf("%99s", NomeDaCidade2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &Pib2);

    printf("Digite a área em km² da cidade 2: \n");
    scanf("%f", &AreaEmKm2);

    // Exibição dos Dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);
    printf("PIB: %.2f\n", Pib2);
    printf("Área em km²: %.2f\n", AreaEmKm2);

    return 0;
}
