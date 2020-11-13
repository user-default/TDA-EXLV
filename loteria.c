#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int escolheAleatorio(int opcao, int *vetor_random, int *temp)
{
    int aux = rand() % opcao;
    *temp = vetor_random[aux];
}
void geradorDeMatrizes(int escolha, int *vetor_random)
{
    printf("Voce escolheu a opcao de %d numeros\n", escolha);
    for(int i = 0; i < escolha; i++)
    {
        vetor_random[i] = rand()%10;
        printf("[%d] ", vetor_random[i]);
    }
    printf("\n");
}
int advinha(int *user1)
{
    printf("Escolha qual numero voce acredita que sera escolhido:\n");
    scanf("%d", user1);
    return *user1;
}
void escolhaUsuario(int usuario, int temporario)
{
    if(usuario == temporario)
    {
        printf("Você acertou!\nO numero escolhido foi %d\n", temporario);
    }
    else
        printf("Você errou!\nO numero escolhido foi %d\n", temporario);
}
int main()
{
    srand(time(NULL));
    int usuario = 0;
    int facil = 3;
    int medio = 5;
    int dificil = 10;
    int choice = 0;
    int tempor = 0;
    int *vet_random;
    printf("Escolha um modo de jogo:\n1 - Para 3 numeros\n2 - Para 5 numeros\n3 - Para 10 numeros\n");
    scanf("%d", &choice);
    if(choice == 1) vet_random = (int*)malloc(facil * sizeof(int));
    else if(choice == 2) vet_random = (int*)malloc(medio * sizeof(int));
    else if(choice == 3) vet_random = (int*)malloc(dificil * sizeof(int));
    else
    {
        printf("Nenhuma das opcoes foi escolhida!\nPrograma encerrado!\n");
        return 0;
    }
    if(!vet_random) return 0;
    switch(choice)
    {
        case 1:
            choice = 3;
            geradorDeMatrizes(facil, vet_random);
            escolheAleatorio(facil, vet_random, &tempor);
            advinha(&usuario);
            escolhaUsuario(usuario, tempor);
            break;
        case 2:
            choice = 5;
            geradorDeMatrizes(medio, vet_random);
            escolheAleatorio(medio, vet_random, &tempor);
            advinha(&usuario);
            escolhaUsuario(usuario, tempor);
            break;
        case 3:
            choice = 10;
            geradorDeMatrizes(dificil, vet_random);
            escolheAleatorio(dificil, vet_random, &tempor);
            advinha(&usuario);
            escolhaUsuario(usuario, tempor);
            break;
        default:
            return 0;
            
    }
    free(vet_random);
    return 0;
}
