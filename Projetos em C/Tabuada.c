/*Programa simples em C que calcula a tabuada de um número fornecido pelo usuário.*/

#include <stdio.h>
int main() {

    int numero, i;


    printf ("De qual numero você gostaria de saber a tabuada?\n");
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);
    printf ("Você selecionou a tabuada de: %d\n", numero);

    for (i = 1; i <= 10; i++) 
    {
        printf ("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}