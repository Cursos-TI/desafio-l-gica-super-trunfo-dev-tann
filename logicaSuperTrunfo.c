#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char Estado1, Codigo_da_Carta1[20], Nome_da_Cidade1[50];
    unsigned long int Populacao1; 
    int Pontos_Turisticos1;
    float Area1, PIB1, Densidade1, PIBcapita1, Superpoder1;

    char Estado2, Codigo_da_Carta2[20], Nome_da_Cidade2[50];
    unsigned long int Populacao2;
    int Pontos_Turisticos2;
    float Area2, PIB2, Densidade2, PIBcapita2, Superpoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

     printf(" Cadastro da Carta 1:\n\n");
    
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo_da_Carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome_da_Cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &Populacao1);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turisticos1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);
    printf("\n");

    Densidade1 = (float) Populacao1 / Area1;
    PIBcapita1 = (PIB1 *1000000000) / (float) Populacao1;
    Superpoder1 = (float) Populacao1 + (float) Pontos_Turisticos1 + Area1 + PIB1 + PIBcapita1 + (float) (1/Densidade1);

    // Área para exibição dos dados da cidade
    
    printf("Carta 1 cadastrada com sucesso!\n\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBcapita1);
    printf("Super Poder: %.2f\n", Superpoder1);

    printf("\n Cadastro da Carta 2:\n\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo_da_Carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome_da_Cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &Populacao2);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turisticos2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);
    printf("\n");

    Densidade2 = (float) Populacao2 / Area2;
    PIBcapita2 = (PIB2 *1000000000) / (float) Populacao2; 
    Superpoder2 = (float) Populacao2 + (float) Pontos_Turisticos2 + Area2 + PIB2 + PIBcapita2 + (float) (1/Densidade2);

  // Área para exibição dos dados da cidade

    printf("Carta 2 cadastrada com sucesso!\n\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBcapita2);
    printf("Super Poder: %.2f\n", Superpoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("\nAperte Enter para iniciar a comparação!\n");
    getchar();
    getchar();

    printf("--- Comparação de Cartas (Atributo: População): ---\n");
    printf("Carta 1 - %s: %lu \n", Nome_da_Cidade1, Populacao1);
    printf("Carta 2 - %s: %lu \n", Nome_da_Cidade2, Populacao2);
    
          if (Populacao1 > Populacao2) {
            printf("Resultado: Cidade 1 (%s) tem maior População: %lu habitantes.\n", Nome_da_Cidade1, Populacao1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem maior População: %lu habitantes.\n", Nome_da_Cidade2, Populacao2);
          }

    printf("--- Comparação de Cartas (Atributo: Área): ---\n");
    printf("Carta 1 - %s: %.2f km²\n", Nome_da_Cidade1, Area1);
    printf("Carta 2 - %s: %.2f km²\n", Nome_da_Cidade2, Area2);
    
          if (Area1 > Area2) {
            printf("Resultado: Cidade 1 (%s) tem maior Área: %.2f km².\n", Nome_da_Cidade1, Area1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem maior Área: %.2f km².\n", Nome_da_Cidade2, Area2);
          }

    printf("--- Comparação de Cartas (Atributo: PIB): ---\n");
    printf("Carta 1 - %s: %.2f Bilhões de reais\n", Nome_da_Cidade1, PIB1);
    printf("Carta 2 - %s: %.2f Bilhões de reais\n", Nome_da_Cidade2, PIB2);
    
          if (PIB1 > PIB2) {
            printf("Resultado: Cidade 1 (%s) tem maior PIB: %.2f Bilhões de reais.\n", Nome_da_Cidade1, PIB1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem maior PIB: %.2f Bilhões de reais.\n", Nome_da_Cidade2, PIB2);
          }

    printf("--- Comparação de Cartas (Atributo: Pontos Turísticos): ---\n");
    printf("Carta 1 - %s: %d \n", Nome_da_Cidade1, Pontos_Turisticos1);
    printf("Carta 2 - %s: %d \n", Nome_da_Cidade2, Pontos_Turisticos2);
    
          if (Pontos_Turisticos1 > Pontos_Turisticos2) {
            printf("Resultado: Cidade 1 (%s) tem mais Pontos Turísticos: %d.\n", Nome_da_Cidade1, Pontos_Turisticos1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem mais Pontos Turísticos: %d.\n", Nome_da_Cidade2, Pontos_Turisticos2);
          }

    printf("--- Comparação de Cartas (Atributo: Densidade Populacional): ---\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", Nome_da_Cidade1, Densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", Nome_da_Cidade2, Densidade2);
    
          if (Densidade1 > Densidade2) {
            printf("Resultado: Cidade 1 (%s) tem maior Densidade: %.2f hab/km².\n", Nome_da_Cidade1, Densidade1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem maior Densidade: %.2f hab/km².\n", Nome_da_Cidade2, Densidade2);
          }

    printf("--- Comparação de Cartas (Atributo: PIB Percapita): ---\n");
    printf("Carta 1 - %s: %.2f reais\n", Nome_da_Cidade1, PIBcapita1);
    printf("Carta 2 - %s: %.2f reais\n", Nome_da_Cidade2, PIBcapita2);
    
          if (PIBcapita1 > PIBcapita2) {
            printf("Resultado: Cidade 1 (%s) tem maior PIB Percapita: %.2f reais.\n", Nome_da_Cidade1, PIBcapita1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem maior PIB Percapita: %.2f reais.\n", Nome_da_Cidade2, PIBcapita2);
          }  

    printf("--- Comparação de Cartas (Atributo: Super Poder): ---\n");
    printf("Carta 1 - %s: %.2f \n", Nome_da_Cidade1, Superpoder1);
    printf("Carta 2 - %s: %.2f \n", Nome_da_Cidade2, Superpoder2);
    
          if (Superpoder1 > Superpoder2) {
            printf("Resultado: Cidade 1 (%s) tem mais Super Poder: %.2f.\n", Nome_da_Cidade1, Superpoder1);
          } else {
            printf("Resultado: Cidade 2 (%s) tem mais Super Poder: %.2f.\n", Nome_da_Cidade2, Superpoder2);
          }  

    return 0;
}
