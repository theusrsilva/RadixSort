#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "fila.c"
#define b 10
int main() {
    int n;
    double d;
    srand(time(NULL));//funçao para não repetir os numeros gerados aleatoriamente
    printf("digite a quantidade de numeros que voce quer:\n");
    scanf("%d",&n);
    printf("digite a o maior digito presente:\n");
    scanf("%lf",&d);
    int vetorInicial[n];
    for(int j =0;j<n;j++){
        vetorInicial[j]=rand() % (int)pow(10.0,d);

    }//gera os n numeros aleatorios com d carateres
    printf("tabela : ");

    for (int i=0;i<n;i++){
        printf("%d ",vetorInicial[i]);
    }//printa a tabela gerada aleatoriamente
    printf("\n\n");

    fila* fila0;
    fila* fila1;
    fila* fila2;
    fila* fila3;
    fila* fila4;
    fila* fila5;
    fila* fila6;
    fila* fila7;
    fila* fila8;
    fila* fila9;

    fila* vetorRadix[b]={fila0,fila1,fila2,fila3,fila4,fila5,fila6,fila7,fila8,fila9};
    for (int m = 0; m <b ; m++) {
        vetorRadix[m]=inicializaFila();
    }//cria e inicializa as filas

    int help=1;//ajuda na formatção do print
    int aux = (int)d;//transforma d em int para colocar no sprintf
    for (int i =d-1;i>=0;i--){
        //iterações
        for(int j=0;j<n;j++){
            char str[(int)d+1];//vetor que armazena os digitos do numero transformados em string
            int k = vetorInicial[j];
            sprintf(str,"%0.*d",aux,vetorInicial[j]);//manda para str o valor selecionado como string formatada completando os zeros a frente
            vetorRadix[str[i]- '0']=pushFila(vetorRadix[str[i]- '0'],k);//da push na respectiva fila
        }
        printf("Iteração %d : %dª distribuição\n\n",help,help);
        //printa as filas cheias
        for (int l = 0; l <b ; l++) {
            printf("fila %d : ",l);
            exibeFila(vetorRadix[l]);
            printf("\n");
        }
        printf("\n");

        int t=0;
        for (int k=0; k<b;k++){
            while (!estaVazia(vetorRadix[k])){
                vetorRadix[k]=popFila(vetorRadix[k]);
                int aux = valor;
                vetorInicial[t]=aux;
                t++;
            }
        }//esvazia as filas passando para o vetor
        printf("tabela : ");
        for (int i=0;i<n;i++){
            printf("%d ",vetorInicial[i]);
        }//printa o vetor depois das iterações
        printf("\n\n");
        help++;

    }
    printf("\n*******fim do radix sort*******\n");




}

//      Conversao int em str e depois str em int
//char str[5];
//int a = 2555;
//
//
//sprintf(str,"%d",a);
//
//for(int i=0;i<strlen(str);++i)
//printf("%c ",str[i]);
//
//a = atoi(str);
//
//printf("%d ",a);


//   teste da fila.
//
//    fila* fila1;
//    fila1 = inicializaFila();
//    fila1 = pushFila(fila1,1);
//    fila1 = pushFila(fila1,2);
//    fila1 = pushFila(fila1,3);
//    fila1 = pushFila(fila1,4);
//    fila1 = pushFila(fila1,5);
//    fila1 = popFila(fila1);
//    fila1 = popFila(fila1);
//    fila1 = popFila(fila1);
//    printf("%d ",valor);
//    fila1 = pushFila(fila1,6);
//    fila1 = popFila(fila1);
//    fila1 = popFila(fila1);
//    printf("%d ",valor);
//    fila1 = pushFila(fila1,7);
//    exibeFila(fila1);