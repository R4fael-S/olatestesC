#include <stdio.h>
int main(){
  char cidade1[10], cidade2[10], codigo1[10], codigo2[10];
  int habitantes1, habitantes2, pontos1, pontos2;
  float area1, area2, PIB1, PIB2;

  printf("preencha os campos a seguir com os dados da primeira carta\n");
  
  printf("\nDigite o nome da cidade: \n");
  scanf("%s", cidade1);
  
  printf("Qual o número de habitantes? \n");
  scanf("%d", &habitantes1);

  printf("Digite o código da carta: ");
  scanf("%s", codigo1);

  printf("Quantos posntos turísticos tem a cidade? ");  
  scanf("%d", &pontos1);

printf("   Dados da primeira carta\n");

printf(" \nO nome da cidade é: %s - Habitantes: %d\n", cidade1, habitantes1);
printf("Código da carta: %s\n", codigo1);

return 0;



}