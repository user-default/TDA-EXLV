#include<stdio.h>

int main()
{
  int t_m1 = 0;
  int t_m2 = 0;

  printf("Digite o tamanho da primeira matriz:\n");
  scanf("%d", &t_m1);
  printf("Digite o tamanho da segunda dimensão da matriz:\n");
  scanf("%d", &t_m2);
  
  static int vet[9999][9999];
  
  for(int i = 0; i < t_m1; i++)
  {
    
    for(int j = 0; j < t_m2; j++)
    {
      printf("Valor para Vet[%d][%d]:\n", i, j);
      scanf("%d", &vet[i][j]);
    }

    
  }
  for(int i = 0; i < t_m1; i++)
  {
    printf("\n");
    for(int j = 0; j < t_m2; j++)
    {
      printf("%d\t", vet[i][j]);
    }
  }


  return 0;
}
