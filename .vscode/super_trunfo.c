#include <stdio.h>
  int main(){

  char estado1[10], estado2[10], codigo1[10], codigo2[10], cidade1[10], cidade2[10]; // estados, código das cartas e nome das cidades, número 1 e 2 para diferenciar as variáveis de cada carta.
  int habitantes1, habitantes2, pontos1, pontos2; //habitantes e pontos turísticos, número 1 e 2 para diferenciar as variáveis de cada carta.
  float area1, area2, PIB1, PIB2; // área em km² e PIB das cidades, número 1 e 2 para diferenciar as variáveis de cada carta.
  
    printf("PREENCHA OS CAMPOS A SEGUIR COM AS INFORMAÇÕES DA SUA PRIMEIRA CARTA\n");

    printf("\nDigite o nome da sua cidade: ");
    scanf("%s", cidade1);// coleta a informação "NOME DA CIDADE da primeira carta" digitada pelo usuário.

    printf("Digite o estado da sua cidade: ");
    scanf("%s", estado1); // coleta a informação "ESTADO da primeira carta" digitada pelo usuáario. 

    printf("Número de habitantes: ");
    scanf("%d", &habitantes1); // coleta a informação "Número de HABITANTES da primeira carta" digitada pelo usuário. 

    printf("Quantos pontos turísticos tem sua cidade? :");
    scanf("%d", &pontos1); // coleta a informação "PONTOS turísticos da primeira carta" digitada pelo usuário .

    printf("Qual o PIB da cidade? :");
    scanf("%f", &PIB1);// coleta a informação "PIB da primeira carta" digitada pelo usuário.

    printf("Quanto km² tem sua cidade? :");
    scanf("%f", &area1);// coleta a informação "ÁREA em km² da primeira carta " digitada pelo usuário

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);// coleta a informação "CÓDIGO da primeira carta" digitada pelo usuário.


printf("\n            Dados coletados da primeira carta\n");

printf("\nNome da cidade: %s - Estado: %s\n", cidade1, estado1); // Imprime as informações "nome da cidade" e " Estado" digitadas pelo usuário .
printf("Número de habitantes: %d - Pontosturísticos: %d\n", habitantes1, pontos1); // Imprime as informações "Habitantes" e " Pontos turísticos" digitadas pelo usuário .
printf("PIB: %.2f - A cidade tem: %.2f km²\n", PIB1, area1);// Imprime as informações "PIB" e " Área em km²" digitadas pelo usuário .
printf("Código da carta: %s\n", codigo1); // Imprime a informação "Código da carta  digitado pelo usuário .


    printf("\n PREENCHA OS CAMPOS A SEGUIR COM OS DADOS DA SEGUNDA CARTA\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);// coleta a informação "NOME DA CIDADE da segunda carta" digitada pelo usuário.

    printf("Digite o estado da cidade: ");
    scanf("%s", estado2);// coleta a informação "ESTADO da primeira carta" digitada pelo usuáario.

    printf("Número de habitantes? :");
    scanf("%d", &habitantes2);// coleta a informação "Número de HABITANTES da primeira carta" digitada pelo usuário. 

    printf("Quantos pontos turísticos tem ? :");
    scanf("%d", &pontos2); // coleta a informação "PONTOS turísticos da segunda carta" digitada pelo usuário .

    printf("Qual o PIB? :");
    scanf("%f", &PIB2);// coleta a informação "PIB da segunda carta" digitada pelo usuário.

    printf("Quantos km² a cidade tem? :");
    scanf("%f", &area2);// coleta a informação "ÁREA em km² da segunda carta " digitada pelo usuário

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);// coleta a informação "CÓDIGO da segunda carta" digitada pelo usuário.

printf("\n        Dados coletados da segunda carta\n");

printf("\nNome da cidade: %s - Estado: %s\n", cidade2, estado2);// Imprime as informações "nome da cidade" e " Estado" digitadas pelo usuário .
printf("Habitantes: %d - Pontos turísticos: %d\n", habitantes2, pontos2); // Imprime as informações "Habitantes" e " Pontos turísticos" digitadas pelo usuário .
printf("PIB: %.2f - Área em Km²: %.2f\n", PIB2, area2);// Imprime as informações "PIB" e " Área em km²" digitadas pelo usuário .
printf("Código da carta: %s\n", codigo2); // Imprime a informação "Código da carta  digitado pelo usuário .



    return 0;

  }
