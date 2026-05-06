/*
Criar um programa em C que permita ao usuário inserir os dados de 
duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas,
de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada,
com uma descrição clara. Por exemplo:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

========== DESAFIO AVENTUREIRO ===========
Calcular a Densidade Populacional: Divida a população da cidade pela sua área. 
O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
Armazene esse valor em uma variável do tipo float. 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
Armazene esse valor em uma variável do tipo float.
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico),
seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. 
Formate os valores de ponto flutuante com duas casas decimais.
*/

#include <stdio.h>

// Variáveis para a Carta 1
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1, pontos1;
float area1, pib1, densidadePopulacional1, pibPerCapita1;

// Variáveis para a Carta 2
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2, pontos2;
float area2, pib2, densidadePopulacional2, pibPerCapita2;

void coletarCarta1() {
    // --- ENTRADA DE DADOS - CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1); // Nota: %s lê até o primeiro espaço.
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
}

void coletarCarta2() {
    // --- ENTRADA DE DADOS - CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
}

void calculosCartas() {
    // calculo de densidade populacional e pib per capita
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;
    // calculo de PIB per capita
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

}



int main() {
    // --- EXIBIÇÃO DOS DADOS ---

    // Chamando as functions 
    coletarCarta1();
    coletarCarta2();
    calculosCartas();

    // Exibição carta 1
    printf("\n==============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // Exibição carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("==============================\n");

    return 0;
}
