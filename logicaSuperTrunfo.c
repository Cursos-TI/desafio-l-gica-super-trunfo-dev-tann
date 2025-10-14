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

    int escolhajogador1, escolhajogador2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf(" Cadastro da Carta 1:\n\n");
    
    printf("Digite a letra do Estado: \n");
    scanf("%c", &Estado1);

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

    printf("\nAperte Enter para entrar no Menu de Comparação...\n");
    getchar();
    getchar();

    printf("### Escolha o Primeiro atributo:... ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolhajogador1);

    printf("### Escolha o Segundo atributo para iniciar a comparação:... ###\n");
    switch (escolhajogador1) {
      case 1:
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
      case 2:
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
      case 3:
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
      case 4:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade Demográfica\n");
        break;
      case 5:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        break;
      default:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
    }
    printf("Escolha: ");
    scanf("%d", &escolhajogador2);

    if (escolhajogador2 < 1 || escolhajogador2 > 5 || escolhajogador2 == escolhajogador1) {
    printf("Escolha inválida. Jogo encerrado.\n");
    return 1;
    }

    double a1_attr1 = 0.0, a1_attr2 = 0.0;
    double a2_attr1 = 0.0, a2_attr2 = 0.0;
    double soma1 = 0.0, soma2 = 0.0;

    switch (escolhajogador1) {
      case 1: a1_attr1 = (double) Populacao1; a2_attr1 = (double) Populacao2; break;
      case 2: a1_attr1 = (double) Area1;       a2_attr1 = (double) Area2;       break;
      case 3: a1_attr1 = (double) PIB1;        a2_attr1 = (double) PIB2;        break;
      case 4: a1_attr1 = (double) Pontos_Turisticos1; a2_attr1 = (double) Pontos_Turisticos2; break;
      case 5: a1_attr1 = (double) Densidade1;  a2_attr1 = (double) Densidade2;  break;
      default: break;
    }

    switch (escolhajogador2) {
      case 1: a1_attr2 = (double) Populacao1; a2_attr2 = (double) Populacao2; break;
      case 2: a1_attr2 = (double) Area1;       a2_attr2 = (double) Area2;       break;
      case 3: a1_attr2 = (double) PIB1;        a2_attr2 = (double) PIB2;        break;
      case 4: a1_attr2 = (double) Pontos_Turisticos1; a2_attr2 = (double) Pontos_Turisticos2; break;
      case 5: a1_attr2 = (double) Densidade1;  a2_attr2 = (double) Densidade2;  break;
      default: break;
    }

    switch (escolhajogador1)
    {
    case 1:
      printf("--- Comparação de Cartas (Atributo: População): ---\n");
      printf("Carta 1 - %s: %lu \n", Nome_da_Cidade1, Populacao1);
      printf("Carta 2 - %s: %lu \n", Nome_da_Cidade2, Populacao2);
    
          if (Populacao1 > Populacao2) {
            printf("Resultado: Cidade 1 (%s) tem maior População: %lu habitantes.\n", Nome_da_Cidade1, Populacao1);
          } else if (Populacao2 > Populacao1) {
            printf("Resultado: Cidade 2 (%s) tem maior População: %lu habitantes.\n", Nome_da_Cidade2, Populacao2);
          } else {
            printf("Resultado: Empate na População: %lu habitantes.\n", Populacao1);
          }
      break;
    case 2:
      printf("--- Comparação de Cartas (Atributo: Área): ---\n");
      printf("Carta 1 - %s: %.2f km²\n", Nome_da_Cidade1, Area1);
      printf("Carta 2 - %s: %.2f km²\n", Nome_da_Cidade2, Area2);
    
          if (Area1 > Area2) {
            printf("Resultado: Cidade 1 (%s) tem maior Área: %.2f km².\n", Nome_da_Cidade1, Area1);
          } else if (Area2 > Area1) {
            printf("Resultado: Cidade 2 (%s) tem maior Área: %.2f km².\n", Nome_da_Cidade2, Area2);
          } else {
            printf("Resultado: Empate na Área: %.2f km².\n", Area1);
          }
      break;
    case 3:
      printf("--- Comparação de Cartas (Atributo: PIB): ---\n");
      printf("Carta 1 - %s: %.2f Bilhões de reais\n", Nome_da_Cidade1, PIB1);
      printf("Carta 2 - %s: %.2f Bilhões de reais\n", Nome_da_Cidade2, PIB2);
    
          if (PIB1 > PIB2) {
            printf("Resultado: Cidade 1 (%s) tem maior PIB: %.2f Bilhões de reais.\n", Nome_da_Cidade1, PIB1);
          } else if (PIB2 > PIB1) {
            printf("Resultado: Cidade 2 (%s) tem maior PIB: R$ %.2f Bilhões.\n", Nome_da_Cidade2, PIB2);
          } else {
            printf("Resultado: Empate no PIB: R$ %.2f Bilhões.\n", PIB1);
          }
      break;
    case 4:
      printf("--- Comparação de Cartas (Atributo: Pontos Turísticos): ---\n");
      printf("Carta 1 - %s: %d \n", Nome_da_Cidade1, Pontos_Turisticos1);
      printf("Carta 2 - %s: %d \n", Nome_da_Cidade2, Pontos_Turisticos2);
    
          if (Pontos_Turisticos1 > Pontos_Turisticos2) {
            printf("Resultado: Cidade 1 (%s) tem mais Pontos Turísticos: %d.\n", Nome_da_Cidade1, Pontos_Turisticos1);
          } else if (Pontos_Turisticos2 > Pontos_Turisticos1) {
            printf("Resultado: Cidade 2 (%s) tem mais Pontos Turísticos: %d.\n", Nome_da_Cidade2, Pontos_Turisticos2);
          } else {
            printf("Resultado: Empate em Pontos Turísticos: %d.\n", Pontos_Turisticos1);
          }
      break;
    case 5:
      printf("--- Comparação de Cartas (Atributo: Densidade Populacional): ---\n");
      printf("Carta 1 - %s: %.2f hab/km²\n", Nome_da_Cidade1, Densidade1);
      printf("Carta 2 - %s: %.2f hab/km²\n", Nome_da_Cidade2, Densidade2);
    
          if (Densidade1 < Densidade2) {
            printf("Resultado: Cidade 1 (%s) tem maior Densidade: %.2f hab/km².\n", Nome_da_Cidade1, Densidade1);
          } else if (Densidade1 > Densidade2) {
            printf("Resultado: Cidade 2 (%s) tem maior Densidade: %.2f hab/km².\n", Nome_da_Cidade2, Densidade2);
          } else {
            printf("Resultado: Empate na Densidade Populacional: %.2f hab/km².\n", Densidade1);
          }
      break;
    default:
      printf("Opção Inválida! Por favor, escolha um número entre 1 e 5...\n");
      break;
    }

switch (escolhajogador2)
    {
    case 1:
      printf("--- Comparação de Cartas (Atributo: População): ---\n");
      printf("Carta 1 - %s: %lu \n", Nome_da_Cidade1, Populacao1);
      printf("Carta 2 - %s: %lu \n", Nome_da_Cidade2, Populacao2);
    
          if (Populacao1 > Populacao2) {
            printf("Resultado: Cidade 1 (%s) tem maior População: %lu habitantes.\n", Nome_da_Cidade1, Populacao1);
          } else if (Populacao2 > Populacao1) {
            printf("Resultado: Cidade 2 (%s) tem maior População: %lu habitantes.\n", Nome_da_Cidade2, Populacao2);
          } else {
            printf("Resultado: Empate na População: %lu habitantes.\n", Populacao1);
          }
      break;
    case 2:
      printf("--- Comparação de Cartas (Atributo: Área): ---\n");
      printf("Carta 1 - %s: %.2f km²\n", Nome_da_Cidade1, Area1);
      printf("Carta 2 - %s: %.2f km²\n", Nome_da_Cidade2, Area2);
    
          if (Area1 > Area2) {
            printf("Resultado: Cidade 1 (%s) tem maior Área: %.2f km².\n", Nome_da_Cidade1, Area1);
          } else if (Area2 > Area1) {
            printf("Resultado: Cidade 2 (%s) tem maior Área: %.2f km².\n", Nome_da_Cidade2, Area2);
          } else {
            printf("Resultado: Empate na Área: %.2f km².\n", Area1);
          }
      break;
    case 3:
      printf("--- Comparação de Cartas (Atributo: PIB): ---\n");
      printf("Carta 1 - %s: %.2f Bilhões de reais\n", Nome_da_Cidade1, PIB1);
      printf("Carta 2 - %s: %.2f Bilhões de reais\n", Nome_da_Cidade2, PIB2);
    
          if (PIB1 > PIB2) {
            printf("Resultado: Cidade 1 (%s) tem maior PIB: %.2f Bilhões de reais.\n", Nome_da_Cidade1, PIB1);
          } else if (PIB2 > PIB1) {
            printf("Resultado: Cidade 2 (%s) tem maior PIB: R$ %.2f Bilhões.\n", Nome_da_Cidade2, PIB2);
          } else {
            printf("Resultado: Empate no PIB: R$ %.2f Bilhões.\n", PIB1);
          }
      break;
    case 4:
      printf("--- Comparação de Cartas (Atributo: Pontos Turísticos): ---\n");
      printf("Carta 1 - %s: %d \n", Nome_da_Cidade1, Pontos_Turisticos1);
      printf("Carta 2 - %s: %d \n", Nome_da_Cidade2, Pontos_Turisticos2);
    
          if (Pontos_Turisticos1 > Pontos_Turisticos2) {
            printf("Resultado: Cidade 1 (%s) tem mais Pontos Turísticos: %d.\n", Nome_da_Cidade1, Pontos_Turisticos1);
          } else if (Pontos_Turisticos2 > Pontos_Turisticos1) {
            printf("Resultado: Cidade 2 (%s) tem mais Pontos Turísticos: %d.\n", Nome_da_Cidade2, Pontos_Turisticos2);
          } else {
            printf("Resultado: Empate em Pontos Turísticos: %d.\n", Pontos_Turisticos1);
          }
      break;
    case 5:
      printf("--- Comparação de Cartas (Atributo: Densidade Populacional): ---\n");
      printf("Carta 1 - %s: %.2f hab/km²\n", Nome_da_Cidade1, Densidade1);
      printf("Carta 2 - %s: %.2f hab/km²\n", Nome_da_Cidade2, Densidade2);
    
          if (Densidade1 < Densidade2) {
            printf("Resultado: Cidade 1 (%s) tem maior Densidade: %.2f hab/km².\n", Nome_da_Cidade1, Densidade1);
          } else if (Densidade1 > Densidade2) {
            printf("Resultado: Cidade 2 (%s) tem maior Densidade: %.2f hab/km².\n", Nome_da_Cidade2, Densidade2);
          } else {
            printf("Resultado: Empate na Densidade Populacional: %.2f hab/km².\n", Densidade1);
          }
      break;
    default:
      printf("Opção Inválida! Por favor, escolha um número entre 1 e 5...\n");
      break;
    }

    soma1 = a1_attr1 + a1_attr2;
    soma2 = a2_attr1 + a2_attr2;

    printf("\nSoma dos dois atributos escolhidos:\n");
    printf("Carta 1 - %s: %.2f\n", Nome_da_Cidade1, soma1);
    printf("Carta 2 - %s: %.2f\n", Nome_da_Cidade2, soma2);

    if (soma1 > soma2) {
      printf("Resultado da soma: Carta 1 (%s) vence com %.2f pontos.\n", Nome_da_Cidade1, soma1);
    } else if (soma2 > soma1) {
      printf("Resultado da soma: Carta 2 (%s) vence com %.2f pontos.\n", Nome_da_Cidade2, soma2);
    } else {
      printf("Resultado da soma: Empate com %.2f pontos em ambas as cartas.\n", soma1);
    }

    return 0;

}