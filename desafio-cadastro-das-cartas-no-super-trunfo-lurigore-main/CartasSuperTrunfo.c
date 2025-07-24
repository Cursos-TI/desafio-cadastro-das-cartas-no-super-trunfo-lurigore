#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

float CalcularDensidade(int numeroHabitantes, float area)
{
    return numeroHabitantes / area;
}
float PIBPerCapita(int numeroHabitantes, float PIB)
{
    return PIB / numeroHabitantes;
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char nomeEstado1[20];
    char codigo1[10];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontosTurísticos1;

    float superPoder1;

    char nomeEstado2[20];
    char codigo2[10];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontosTurísticos2;

    float superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("|---| Cadastro 1° Carta |---|\n");

    printf("Insira o nome do Estado: ----/\n");
    fgets(nomeEstado1, 50, stdin);
    nomeEstado1[strcspn(nomeEstado1, "\n")] = 0;
    printf("Insira o Código da Cidade, composto pela letra do estado e um numero de 01 a 04 (ex: A01, B03) ----/\n");
    scanf("%s", &codigo1);
    printf("Insira o número de habitantes da cidade ----/\n");
    scanf("%d", &populacao1);
    printf("Insira a área da cidade em Km² ----/\n");
    scanf("%f", &area1);
    printf("Insira o Produto Interno Bruto da cidade ----/\n");
    scanf("%f", &PIB1);
    printf("Insira a quantidade de pontos turísticos ----/\n");
    scanf("%d", &pontosTurísticos1);

    superPoder1 = populacao1 + area1 + PIB1 + pontosTurísticos1 + PIBPerCapita(populacao1, PIB1) + (1 / CalcularDensidade(populacao1, area1));

    printf("|---| Cadastro 2° Carta |---|\n");

    getchar();
    printf("Insira o nome do Estado: ----/\n");
    fgets(nomeEstado2, 50, stdin);
    nomeEstado2[strcspn(nomeEstado2, "\n")] = 0;
    printf("Insira o Código da Cidade, composto pela letra do estado e um numero de 01 a 04 (ex: A01, B03) ----/\n");
    scanf("%s", &codigo2);
    printf("Insira o número de habitantes da cidade ----/\n");
    scanf("%d", &populacao2);
    printf("Insira a área da cidade em Km² ----/\n");
    scanf("%f", &area2);
    printf("Insira o Produto Interno Bruto da cidade ----/\n");
    scanf("%f", &PIB2);
    printf("Insira a quantidade de pontos turísticos ----/\n");
    scanf("%d", &pontosTurísticos2);

    superPoder2 = populacao2 + area2 + PIB2 + pontosTurísticos2 + PIBPerCapita(populacao2, PIB2) + (1 / CalcularDensidade(populacao2, area2));

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n1° Carta ----/\n");

    printf("Estado: %s\n", nomeEstado1);
    printf("Código Cidade: %s\n", codigo1);
    printf("Habitantes: %d\n", populacao1);
    printf("Área: %.1f Km²\n", area1);
    printf("Produto Interno Bruto: R$%.2f\n", PIB1);
    printf("Quantidade Pontos Turísticos: %d\n", pontosTurísticos1);
    printf("Densidade Populacional: %.2f Pessoas por Km²\n", CalcularDensidade(populacao1, area1));
    printf("PIB Per Capita: R$%.2f\n", PIBPerCapita(populacao1, PIB1));
    printf("Super Poder: %.2f\n", superPoder1);
    

    printf("\n2° Carta ----/\n");

    printf("Estado: %s\n", nomeEstado2);
    printf("Código Cidade: %s\n", codigo2);
    printf("Habitantes: %d\n", populacao2);
    printf("Área: %.1f Km²\n", area2);
    printf("Produto Interno Bruto: R$%.2f\n", PIB2);
    printf("Quantidade Pontos Turísticos: %d\n", pontosTurísticos2);
    printf("Densidade Populacional: %.2f Pessoas por Km²\n", CalcularDensidade(populacao2, area2));
    printf("PIB Per Capita: R$%.2f\n", PIBPerCapita(populacao2, PIB2));
    printf("Super Poder: %.2f\n", superPoder2);


    printf("Pressione qualquer tecla para iniciar a comparação.");
    getchar();
    getchar();



    return 0;
}

