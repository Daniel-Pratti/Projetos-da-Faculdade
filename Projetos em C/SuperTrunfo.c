/*Projeto de um Jogo de SuperTrunfo em C para um trabalho de faculdade.*/

#include <stdio.h>
int main (){

    int pontos_turisticos_1;                 // Declaração de variáveis da primeira carta
    float area_1, pib_1, densidade_1, pibcapita_1, superpoder_1;
    char estado_1, codigo_1[10], cidade_1[20];
    unsigned long int populacao_1;

    
    int pontos_turisticos_2;                                      // Declaração de variáveis da segunda carta
    float area_2, pib_2,densidade_2, pibcapita_2, superpoder_2;
    char estado_2, codigo_2[10], cidade_2[20];
    unsigned long int populacao_2;

    int opcao;

    printf ("Bem vindo ao super trunfo de cidades brasileiras!\n");
    printf("Menu de opções:\n");
    printf("1 - Jogar\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    printf("Digite a opção desejada:");
    scanf ("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nIniciando o jogo...\n");
            printf("Vamos cadastrar a primeira carta:\n\n");
                

            printf("Digite o nome da cidade:");                           // Coleta de dados para primeira carta
            scanf("%s", cidade_1);

            printf("Digite a sigla do estado(A-H):");
            scanf(" %c", &estado_1);

            printf("Digite um código(01 a 04):");
            scanf("%s", codigo_1);

            printf("Digite a população:");
            scanf("%lu", &populacao_1);

            printf("Digite a área:");
            scanf("%f", &area_1);

            printf("Digite o PIB:");
            scanf("%f", &pib_1);

            printf("Digite os pontos turísticos:");
            scanf("%d", &pontos_turisticos_1);


            densidade_1 = populacao_1 / area_1;                    // Cálculo da densidade demográfica da primeira carta
            pibcapita_1 = pib_1 / populacao_1;                    // Cálculo do PIB per capita da primeira carta
            superpoder_1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pibcapita_1 + (1.0 / densidade_1); // Cálculo do superpoder da primeira carta

            printf("\nAgora vamos cadastrar a segunda carta:\n\n");            // Coleta de dados para segunda carta

            printf("Digite o nome da cidade:");
            scanf("%s", cidade_2);

            printf("Digite a sigla do estado(A-H):");
            scanf(" %c", &estado_2);

            printf("Digite um código(01 a 04):");
            scanf("%s", codigo_2);

            printf("Digite a população:");
            scanf("%lu", &populacao_2);

            printf("Digite a área:");
            scanf("%f", &area_2);

            printf("Digite o PIB:");
            scanf("%f", &pib_2);

            printf("Digite os pontos turísticos:");
            scanf("%d", &pontos_turisticos_2);


            densidade_2 = populacao_2 / area_2;                            // Cálculo da densidade demográfica da segunda carta
            pibcapita_2 = pib_2 / populacao_2;                            // Cálculo do PIB per capita da segunda carta
            superpoder_2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pibcapita_2 + (1.0 / densidade_2); // Cálculo do superpoder da segunda carta

            printf("\n\n");                                           // Quebra de linha para melhor visualização


            printf("Cadastro concluído! Aqui estão as cartas:\n\n");


            printf("\nPrimeira Carta:\n\n");                            // Exibição dos dados da primeira carta
            printf("Cidade: %s\n", cidade_1);
            printf("Estado: %c\n", estado_1);
            printf("Código: %c%s\n",estado_1, codigo_1);
            printf("População: %lu\n", populacao_1);
            printf("Área: %.2fkm²\n", area_1);
            printf("PIB: %.2f\n", pib_1);
            printf("Pontos Turísticos: %d\n", pontos_turisticos_1);
            printf("Densidade Demográfica: %.2f hab/km²\n", densidade_1);
            printf("PIB per capita: %.2f\n", pibcapita_1);
            printf("Superpoder: %.2f\n\n", superpoder_1);


            printf("\nSegunda Carta:\n\n");                            // Exibição dos dados da segunda carta
            printf("Cidade: %s\n", cidade_2);
            printf("Estado: %c\n", estado_2);
            printf("Código: %c%s\n",estado_2, codigo_2);
            printf("População: %lu\n", populacao_2);
            printf("Área: %.2fkm²\n", area_2);
            printf("PIB: %.2f\n", pib_2);
            printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
            printf("Densidade Demográfica: %.2f hab/km²\n", densidade_2);
            printf("PIB per capita: %.2f\n", pibcapita_2);
            printf("superpoder: %.2f \n\n", superpoder_2);

            int opcao1;
            printf("Escolha o que deseja fazer agora:\n");
            printf("1 - Comparar cartas\n");
            printf("2 - Comparar 1 atributo especifico entre as cartas\n");
            printf("3 - Comparar 2 atributos especificos entre as cartas\n");
            printf("4 - Sair\n");
            printf("Digite a opção desejada:");
            scanf("%d", &opcao1);

            switch (opcao1) {
                case 1:
                    printf("Comparando as cartas em todas as categoria:\n\n"); // Comparação das cartas em cada categoria

   if (populacao_1 > populacao_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria população!\n", cidade_1);
   } else if (populacao_2 > populacao_1) {
      printf("A Cidade %s(Carta 2) venceu na categoria população!\n", cidade_2);
   } else {
      printf("Empate na categoria população!\n");
   }

   if (area_1 > area_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria área!\n", cidade_1);
   } else if (area_2 > area_1) {
       printf("A Cidade %s(Carta 2) venceu na categoria área!\n", cidade_2);
   } else {
       printf("Empate na categoria área!\n");
   }

   if (pib_1 > pib_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria PIB!\n", cidade_1);
   } else if (pib_2 > pib_1) {
       printf("A Cidade %s(Carta 2) venceu na categoria PIB!\n", cidade_2);
   } else {
       printf("Empate na categoria PIB!\n");
   }

   if (pontos_turisticos_1 > pontos_turisticos_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria pontos turísticos!\n", cidade_1);
   } else if (pontos_turisticos_2 > pontos_turisticos_1) {
       printf("A Cidade %s(Carta 2) venceu na categoria pontos turísticos!\n", cidade_2);
   } else {
       printf("Empate na categoria pontos turísticos!\n");
   }

   if (densidade_1 < densidade_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria densidade demográfica!\n", cidade_1);
   } else if (densidade_2 < densidade_1) {
       printf("A Cidade %s(Carta 2) venceu na categoria densidade demográfica!\n", cidade_2);
   } else {
       printf("Empate na categoria densidade demográfica!\n");
   }

   if (pibcapita_1 > pibcapita_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria PIB per capita!\n", cidade_1);
   } else if (pibcapita_2 > pibcapita_1) {
       printf("A Cidade %s(Carta 2) venceu na categoria PIB per capita!\n", cidade_2);
   } else {
       printf("Empate na categoria PIB per capita!\n");
   }


   if (superpoder_1 > superpoder_2) {
       printf("A Cidade %s(Carta 1) venceu na categoria superpoder!\n\n", cidade_1);
   } else if (superpoder_2 > superpoder_1) {
       printf("A Cidade %s(Carta 2) venceu na categoria superpoder!\n\n", cidade_2);
   } else {
       printf("Empate na categoria superpoder!\n\n");
   }

            break;
        case 2:

                    int atributo;
                    printf("\nEscolha qual atributo você quer comparar.\n");
                    printf("1 - População\n");
                    printf("2 - Área\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turísticos\n");
                    printf("5 - Densidade Demográfica\n");
                    printf("6 - PIB per capita\n");
                    printf("7 - Superpoder\n");
                    printf("\nDigite a opção desejada:");
                    scanf("%d", &atributo);

        

                       switch (atributo) {
                case 1:
                    if (populacao_1 > populacao_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria população!\n", cidade_1);
                    } else if (populacao_2 > populacao_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria população!\n", cidade_2);
                    } else {
                        printf("Empate na categoria população!\n");
                    }
                       break;
                case 2:
                    if (area_1 > area_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria área!\n", cidade_1);
                    } else if (area_2 > area_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria área!\n", cidade_2);
                    } else {
                        printf("Empate na categoria área!\n");
                    }
                       break;
                case 3:
                    if (pib_1 > pib_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria PIB!\n", cidade_1);
                    } else if (pib_2 > pib_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria PIB!\n", cidade_2);
                    } else {
                        printf("Empate na categoria PIB!\n");
                    }
                       break;
                case 4:
                    if (pontos_turisticos_1 > pontos_turisticos_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria pontos turísticos!\n", cidade_1);
                    } else if (pontos_turisticos_2 > pontos_turisticos_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria pontos turísticos!\n", cidade_2);
                    } else {
                        printf("Empate na categoria pontos turísticos!\n");
                    }
                       break;
                case 5:
                    if (densidade_1 < densidade_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria densidade demográfica!\n", cidade_1);
                    } else if (densidade_2 < densidade_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria densidade demográfica!\n", cidade_2);
                    } else {
                        printf("Empate na categoria densidade demográfica!\n");
                    }
                       break;
                case 6:
                    if (pibcapita_1 > pibcapita_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria PIB per capita!\n", cidade_1);
                    } else if (pibcapita_2 > pibcapita_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria PIB per capita!\n", cidade_2);
                    } else {
                        printf("Empate na categoria PIB per capita!\n");
                    }
                       break;
                case 7:
                    if (superpoder_1 > superpoder_2) {
                        printf("A Cidade %s(Carta 1) venceu na categoria superpoder!\n", cidade_1);
                    } else if (superpoder_2 > superpoder_1) {
                        printf("A Cidade %s(Carta 2) venceu na categoria superpoder!\n", cidade_2);
                    } else {
                        printf("Empate na categoria superpoder!\n");
                    }
                        break;
                     default:
                       printf("Opção inválida. Saindo do jogo.\n");
                }
                return 0;
                

                case 3:
                    int atributo1, atributo2;
                    printf("\nEscolha o primeiro atributo que você quer comparar.\n");
                    printf("1 - População\n");
                    printf("2 - Área\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turísticos\n");
                    printf("5 - Densidade Demográfica\n");
                    printf("6 - PIB per capita\n");
                    printf("7 - Superpoder\n");
                    printf("\nDigite a opção desejada:\n");
                    scanf("%d", &atributo1);

                    printf("\nEscolha o segundo atributo que você quer comparar.\n");
                    printf("1 - População\n");
                    printf("2 - Área\n");
                    printf("3 - PIB\n");
                    printf("4 - Pontos Turísticos\n");
                    printf("5 - Densidade Demográfica\n");
                    printf("6 - PIB per capita\n");
                    printf("7 - Superpoder\n");
                    printf("\nDigite a opção desejada:");
                    scanf("%d", &atributo2);

                    if (atributo1 == atributo2) {
                        printf("Você escolheu o mesmo atributo duas vezes. Por favor, escolha atributos diferentes.\n");
                        return 0;
                    }   
                    switch (atributo1) {
                case 1:
                    printf ("Primeiro Atributo: População\n\n");
                    if (populacao_1 > populacao_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria população!\n\n", cidade_1);
                    else if (populacao_2 > populacao_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria população!\n\n", cidade_2);
                    else
                        printf("Empate na categoria população!\n\n");

                    break;
                case 2:
                    printf ("Primeiro Atributo: Área\n\n");
                    if (area_1 > area_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria área!\n\n", cidade_1);
                    else if (area_2 > area_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria área!\n\n", cidade_2);
                    else
                        printf("Empate na categoria área!\n\n");
                    break;
                case 3:
                    printf ("Primeiro Atributo: PIB\n\n");
                    if (pib_1 > pib_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria PIB!\n\n", cidade_1);
                    else if (pib_2 > pib_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria PIB!\n\n", cidade_2);
                    else
                        printf("Empate na categoria PIB!\n\n");
                    break;
                case 4:
                    printf ("Primeiro Atributo: Pontos Turísticos\n\n");
                    if (pontos_turisticos_1 > pontos_turisticos_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria pontos turísticos!\n\n", cidade_1);
                    else if (pontos_turisticos_2 > pontos_turisticos_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria pontos turísticos!\n\n", cidade_2);
                    else
                        printf("Empate na categoria pontos turísticos!\n\n");
                    break;
                case 5:
                    printf ("Primeiro Atributo: Densidade Demográfica\n\n");
                    if (densidade_1 < densidade_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria densidade demográfica!\n\n", cidade_1);
                    else if (densidade_2 < densidade_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria densidade demográfica!\n\n", cidade_2);
                    else
                        printf("Empate na categoria densidade demográfica!\n\n");
                    break;
                case 6:
                    printf ("Primeiro Atributo: PIB per capita\n\n");
                    if (pibcapita_1 > pibcapita_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria PIB per capita!\n\n", cidade_1);
                    else if (pibcapita_2 > pibcapita_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria PIB per capita!\n\n", cidade_2);
                    else
                        printf("Empate na categoria PIB per capita!\n\n");
                    break;
                case 7:
                    printf ("Primeiro Atributo: Superpoder\n\n");
                    if (superpoder_1 > superpoder_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria superpoder!\n\n", cidade_1);
                    else if (superpoder_2 > superpoder_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria superpoder!\n\n", cidade_2);
                    else
                        printf("Empate na categoria superpoder!\n\n");
                    break;
                default:
                    printf("Opção inválida. Saindo do jogo.\n\n");
                    return 0;
                    }
                switch (atributo2) {
                case 1:
                    printf ("Segundo Atributo: População\n\n");
                    if (populacao_1 > populacao_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria população!\n\n", cidade_1);
                    else if (populacao_2 > populacao_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria população!\n\n", cidade_2);
                    else
                        printf("Empate na categoria população!\n\n");
                    break;
                case 2:
                    printf ("Segundo Atributo: Área\n\n");
                    if (area_1 > area_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria área!\n\n", cidade_1);
                    else if (area_2 > area_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria área!\n\n", cidade_2);
                    else
                        printf("Empate na categoria área!\n\n");
                    break;
                case 3:
                    printf ("Segundo Atributo: PIB\n\n");
                    if (pib_1 > pib_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria PIB!\n\n", cidade_1);
                    else if (pib_2 > pib_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria PIB!\n\n", cidade_2);
                    else
                        printf("Empate na categoria PIB!\n");
                    break;

                case 4:
                    printf ("Segundo Atributo: Pontos Turísticos\n\n");
                    if (pontos_turisticos_1 > pontos_turisticos_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria pontos turísticos!\n\n", cidade_1);
                    else if (pontos_turisticos_2 > pontos_turisticos_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria pontos turísticos!\n\n", cidade_2);
                    else
                        printf("Empate na categoria pontos turísticos!\n\n");
                    break;

                case 5:
                    printf ("Segundo Atributo: Densidade Demográfica\n\n");
                    if (densidade_1 < densidade_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria densidade demográfica!\n\n", cidade_1);
                    else if (densidade_2 < densidade_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria densidade demográfica!\n\n", cidade_2);
                    else
                        printf("Empate na categoria densidade demográfica!\n\n");
                    break;

                case 6:
                    printf ("Segundo Atributo: PIB per capita\n\n");
                    if (pibcapita_1 > pibcapita_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria PIB per capita!\n\n", cidade_1);
                    else if (pibcapita_2 > pibcapita_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria PIB per capita!\n\n", cidade_2);
                    else
                        printf("Empate na categoria PIB per capita!\n\n");
                    break;

                case 7:
                    printf ("Segundo Atributo: Superpoder\n\n");
                    if (superpoder_1 > superpoder_2)
                        printf("A Cidade %s(Carta 1) venceu na categoria superpoder!\n\n", cidade_1);
                    else if (superpoder_2 > superpoder_1)
                        printf ("A Cidade %s(Carta 2) venceu na categoria superpoder!\n\n", cidade_2);
                    else
                        printf("Empate na categoria superpoder!\n\n");
                    break;

                default:
                    printf("Opção inválida. Saindo do jogo.\n");
                    return 0;
                    
                    }   

                    break;
                case 4:
                    printf("Saindo do jogo. Até a próxima!\n");
                    return 0;
                default:
                    printf("Opção inválida. Saindo do jogo.\n");
                    return 0;




            }
            break;
        case 2:
            printf("\nRegras do jogo:\n\n");
             printf(" - Você irá cadastrar 2 cartas de cidades.\n");
             printf(" - Cada carta deverá conter as seguintes informações.\n\n");
             printf(" __________________________________________________________________________ \n");
             printf("| - Estado: uma letra de 'A' a 'H'           |Obs:representa um dos estados|\n");
             printf("| - Código da Carta:número de 01 a 04        |Ex:  01, 03                  |\n");
             printf("| - Nome da Cidade: o Nome da cidade         |Ex:  Vitória                 |\n");
             printf("| - População: número de habitantes          |Ex:  4575231                 |\n");
             printf("| - Área: em km²                             |Ex:  4331.5                  |\n");
             printf("| - PIB: Produto Interno Bruto da cidade     |Ex:  12345.67                |\n");
             printf("| - Pontos Turísticos: número de pontos      |Ex:  15                      |\n");
             printf(" ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n\n");
            break;
        case 3:
            printf("Saindo do jogo. Até a próxima!\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;



    }
    return 0;


}