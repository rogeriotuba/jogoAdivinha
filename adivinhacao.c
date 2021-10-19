#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define numerotentativas 5



int main(){
    while(1){
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto;
    int level;

    printf("Digite a dificuldade do Jogo de 1 a 3 :   ");
    fflush(stdin);
    scanf("%d",&level);

    switch(level){
    case 1:
        numeroSecreto = numeroGrande%10;
    break;

    case 2:
        numeroSecreto = numeroGrande%100;
    break;

    case 3:
        numeroSecreto = numeroGrande%1000;
    break;

    }

        for(int i=1;i<=numerotentativas;i++){
        printf("Nivel:%d  \n",level);
        printf("Numero secreto:%d  \n",numeroSecreto);
        printf("****************************************\n");
        printf("**********Jogo de Adivinhacao***********\n");
        printf("****************************************\n");


        int numeroChute ;
        int pontos =1000;
        double pontosFinais = pontos/i;

            printf("\nDigite o numero chute:  ");
            fflush(stdin);
            scanf("%d",&numeroChute);

            if(numeroSecreto==numeroChute){

                printf("\n           OOOOOOOOOOO               \n");
                printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
                printf("         OOOOOOOOOOOOOOOOOOO           \n");
                printf("    OOOOOO      OOOOO      OOOOOO      \n");
                printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
                printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
                printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
                printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
                printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
                printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
                printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
                printf("         OOOOOO         OOOOOO         \n");
                printf("             OOOOOOOOOOOO              \n");
                printf("\n\n");
                printf("\nParabens acertou o numero secreto e : %d\n\n",numeroSecreto);
                printf("Numero Chutado:  %d\n",numeroChute);
                printf("Tentativa:  %d\n",i);
                printf("Pontos:  %.2f\n\n",pontosFinais);

                break;
            }
            else if(numeroSecreto>numeroChute){

                printf("\n     \\|/ ____ \\|/    \n");
                printf("        @~/ ,. \\~@      \n");
                printf("       /_( \\__/ )_\\    \n");
                printf("          \\__U_/        \n");


                printf("\nVoce errou, o numero secreto e maior que o numero chutado\n\n");
                printf("Numero Chutado:  %d\n",numeroChute);
                printf("Tentativa:  %d\n",i);
                printf("Pontos:  %.2f\n\n",pontosFinais);

            }
            else{
                printf("\n     \\|/ ____ \\|/    \n");
                printf("        @~/ ,. \\~@      \n");
                printf("       /_( \\__/ )_\\    \n");
                printf("          \\__U_/        \n");
                printf("\nVoce errou, o numero secreto e menor que o numero chutado\n\n");
                printf("Numero Chutado:  %d\n",numeroChute);
                printf("Tentativa:  %d\n",i);
                printf("Pontos:  %.2f\n\n",pontosFinais);

                }
            system("pause");//pausa o programa
            system("cls"); //limpa a tela do prompt


                }

        printf("****************************************\n");
        printf("**********GAME OVER*********************\n");
        printf("****************************************\n");
        break;

      }
    }


