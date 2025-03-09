#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Estado1;
    char CodigoDaCarta1;
    char NomeDaCidade1;
    int Populaçao1;
    int NumeroDePontosTuristicos1;
    float Pib1;
    float AreaEmKm1;

    char Estado2;
    char CodigoDaCarta2;
    char NomeDaCidade2;
    int Populaçao2;
    int NumeroDePontosTuristicos2;
    float Pib2;
    float AreaEmKm2;

 // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("digite o Estado da carta 1: \n");
    scanf("%s", &Estado1);

    printf("digite o codigo da carta1: \n");
    scanf("%s", &CodigoDaCarta1);

    printf("digite o Nome da cidade: \n");
    scanf("%s", &NomeDaCidade1);

    printf("digite a populaçao: \n");
    scanf("%d", &Populacao1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    printf("digite o Pib: \n");
    scanf("%f", &Pib1);

    printf("digite a Area em km: \n");
    scanf("%d", &AreaEmKm1);

    printf("Estado da carta 1:%s\n codigo da carta1: %s\n", Estado1, Codigo de carta1);
    printf("Nome da cidade1:%s\n populaçao: %d", Nome da cidade1 , Populacao1);

    // Exibição dos Dados das Cartas:
    
    printf("Numero de pontos turisticos1:%d\n Pib1: %f\n", Numero de pontos turisticos1, Pib1);
    printf("Area em km:%d\n", Area em km1);

     printf("digite o Estado da carta 2: \n");
    scanf("%s", &Estado2);

    printf("digite o codigo da carta2: \n");
    scanf("%s", &CodigoDaCarta2);

    printf("digite o Nome da cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("digite a populaçao: \n");
    scanf("%d", &Populacao2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("digite o Pib: \n");
    scanf("%f", &Pib2);

    printf("digite a Area em km: \n");
    scanf("%d", &AreaEmKm2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Estado da carta 2:%s\n codigo da carta2: %s\n", Estado2, Codigo de carta2);
    printf("Nome da cidade2:%s\n populaçao: %d", Nome da cidade2 , Populacao2);
    
    printf("Numero de pontos turisticos2:%d\n Pib2: %f\n", Numero de pontos turisticos2, Pib2);
    printf("Area em km:%d\n", Area em km2);

    
    
    
    
   
    


    return 0;
}
