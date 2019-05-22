#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "fila.c"
#define b 10
int main() {
    int n;
    double d=0;
    srand(time(NULL));//funçao para não repetir os numeros gerados aleatoriamente
    printf("digite a quantidade de numeros que voce quer:\n");
    scanf("%d",&n);
    while(d==0) {
        printf("digite a o maior digito presente (maior que 0):\n");
        scanf("%lf", &d);
    }
    int vetorInicial[n];
    for(int j =0;j<n;j++){
        vetorInicial[j]=rand() % (int)pow(10.0,d);

    }//gera os n numeros aleatorios com d carateres
    printf("tabela : ");
    if(n!=0) {
        for (int i = 0; i < n; i++) {
            printf("%d ", vetorInicial[i]);
        }//printa a tabela gerada aleatoriamente
        printf("\n\n");
    }else{
        printf("Vazia.");
    }
    if (n!=0) {
        fila* vetorRadix[b];


        //cria e inicializa as filas
        for (int m = 0; m <b ; m++) {
            fila*nova = inicializaFila();
            vetorRadix[m]=nova;
        }


        printf("\n-------Filas Criadas------- \n");


        int help=1;                                     //ajuda na formatção do print

        int aux = (int) d;                               //transforma d em int para colocar no sprintf
        for (int i = d - 1; i >= 0; i--) {
            //iterações
            for (int j = 0; j < n; j++) {
                char str[(int) d +
                         1];                             //vetor que armazena os digitos do numero transformados em string
                int k = vetorInicial[j];
                sprintf(str, "%0.*d", aux,
                        vetorInicial[j]);                           //manda para str o valor selecionado como string formatada completando os zeros a frente
                vetorRadix[str[i] - '0'] = pushFila(vetorRadix[str[i] - '0'],
                                                    k);                    //da push na respectiva fila
            }
            printf("\n\nIteração %d : %dª distribuição\n\n", help, help);

            //printa as filas cheias
            for (int l = 0; l < b; l++) {
                printf("fila %d : ", l);
                exibeFila(vetorRadix[l]);
                printf("\n");
            }
            printf("\n");

            int t = 0;
            for (int k = 0; k < b; k++) {
                while (vetorRadix[k]->inicio != NULL) {
                    vetorRadix[k] = popFila(vetorRadix[k]);
                    int aux = valor;
                    vetorInicial[t] = aux;
                    t++;
                }
            }

            //esvazia as filas passando para o vetor

            printf("tabela : ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", vetorInicial[i]);
                }                                           //printa o vetor depois das iterações

                printf("\n\n");
                help++;


        }
    }
    printf("\n\n*******fim do radix sort*******\n\n");




}

