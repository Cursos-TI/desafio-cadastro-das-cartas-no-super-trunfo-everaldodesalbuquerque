#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo!\n");
    printf("\n");

    //Declaração e Inicialização das Variáveis
    int Carta = 1; // Número da carta
    int CartA = 2; // Número da cartA
    char Estado = 'P'; // Armazena o Estado (exemplo: 'P' para Pernambuco) 
    char EstadO = 'A'; // Armazena o EstadO (exemplo: 'A' para Alagoas)
    char Codigo[4] = "P01"; // Código da Carta
    char codigO[4] = "A01"; // Código da Carta
    char Cidade[10] = "Recife"; // Nome da Cidade do Estado 'P'
    char CidadE[10] = "Maceio"; // Nome da Cidade do Estado 'A'
    int Populacao = 1490000; // Número de habitantes da Cidade do Recife, número inteiro 
    int PopulacaO = 1375980; // Número de habitantes da Cidade de Maceió, número inteiro
    float area_km2 = 218.84; // Área em Km², da Cidade de Recife, número decimal
    float Area_km2 = 509.32; // Área em Km², da Cidade de maceió, número decimal
    float PIB_Bilhoes_de_reais = 54.970; // PIB da cidade de Recife em bilhões, número decimal
    float PIb_Bilhoes_de_reais = 76.070; // PIB da cidade de Maceió em bilhões, número decimal
    int Pontosturisticos = 18; // Número de pontos turísticos da Cidade de Recife, número inteiro
    int PontosTuristicos = 19; // Número de pontos turísticos da Cidade de Maceió, número inteiro

    // Entrada de dados pelo usuário da Carta 1:
    printf("Digite a carta: ");
    scanf("%d", &Carta); // Lê um número inteiro

    printf("Digite o Estado: ");
    scanf(" %c", &Estado); // Lê um caractere

    printf("Digite o Código: ");
    scanf("%s", Codigo); // Lê uma string

    printf("Digite a Cidade: ");
    scanf("%s", Cidade); // Lê uma string

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao); // Lê um número inteiro

    printf("Digite a area (Km²): ");
    scanf("%f", &area_km2); // Lê um número decimal

    printf("Digite o PIB: ");
    scanf("%f", &PIB_Bilhoes_de_reais); // Lê um número decimal

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Pontosturisticos); // Lê um número inteiro

    printf("\n"); // Pula uma linha

    // Entrada de dados pelo usuário da Carta 2:
    printf("Digite a Carta: ");
    scanf(" %d", &CartA); // Lê um número inteiro

    printf("Digite o Estado: ");
    scanf(" %c", &EstadO); // Lê um caractere

    printf("Digite o Código: ");
    scanf("%s", codigO); // Lê uma string

    printf("Digite a Cidade: ");
    scanf("%s", CidadE); // Lê uma string

    printf("Digite a Populacao: ");
    scanf("%d", &PopulacaO); // Lê um número inteiro

    printf("Digite a area (Km²): ");
    scanf("%f", &Area_km2); // Lê um número decimal

    printf("Digite o PIB: ");
    scanf("%f", &PIb_Bilhoes_de_reais); // Lê um número decimal

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos); // Lê um número inteiro

    printf("\n"); // Pula uma linha

    
    


}