/*Projeto de um Jogo de Xadrez em C para um trabalho de faculdade.*/

#include <stdio.h>

void casa1(int torre1)
{
    if (torre1 >= 1)
    {
        printf("Direita\n");
        casa1 (torre1 - 1);
    }
}

void casa2(int bispo1)
{
    if (bispo1 >= 1)
    {
        for (int bispo2 = 1; bispo2 < 2; bispo2++)
        {
            printf("Cima ");
            for (int bispo3 = 1; bispo3 < 2; bispo3++)
            {
                printf("Direita\n");
            }
        }
        casa2 (bispo1 - 1);
    }
}

void casa3(int rainha1)
{
    if (rainha1 >= 1)
    {
        printf("Esquerda\n");
        casa3 (rainha1 - 1);
    }
}

int main () {

    int torre = 5, bispo = 5, rainha = 8, cavalo = 1;
    int peça, escolha;

    do
    {
    printf("Bem-vindo ao jogo de xadrez!\n");
    printf("Você pode movimentar as seguintes peças:\n");
    printf("Qual peça você quer movimentar?\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("\nDigite o número correspondente à peça: ");
    scanf("%d", &peça);
    printf("\n");

    while (peça < 1 || peça > 4) {
        printf("Peça inválida. Por favor, selecione uma peça válida:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        scanf("%d", &peça);
    }

    switch (peça)
    {
    case 1:
        printf("Você selecionou a torre.\n");
        casa1(torre);

        break;
    case 2:
        printf("Você selecionou o bispo.\n");
        casa2(bispo);

        break;
    case 3:
        printf("Você selecionou a rainha.\n");
        casa3(rainha);

        break;
    case 4:
        printf("Você selecionou o cavalo.\n");
        cavalo = 1;
        while (cavalo < 2)
        {
            for (int cavalo1 = 1; cavalo1 <= 2; cavalo1++)
            {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
            cavalo++;
        }   
        break;
    default:
        printf("Peça inválida.\n");

        break;
    }
    printf("\nDeseja jogar de novo?\n");
    printf("1 - Sim\n");
    printf("2 - Não (Sai do jogo)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    printf("\n");

    } while (escolha != 2);
    printf("Obrigado por jogar!\n");
    return 0;
}