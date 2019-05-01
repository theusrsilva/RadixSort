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
    srand(time(NULL));
    printf("digite a quantidade de numeros que voce quer:\n");
    scanf("%d",&n);
    printf("digite a o maior digito presente:\n");
    scanf("%lf",&d);
    int vetorInicial[n];
    for(int j =0;j<n;j++){
        if(d==1){
            vetorInicial[j]=rand() % (int)pow(10.0,d);
        }else{
            vetorInicial[j]=rand() % (int)pow(10.0,d);
            while(vetorInicial[j]<(int)pow(10.0,d-1)){
                vetorInicial[j]=rand() % (int)pow(10.0,d);
            }
        }
    }
    printf("tabela 1: ");
    for (int i=0;i<n;i++){
        printf("%d ",vetorInicial[i]);
    }
    printf("\n");

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
    fila0=inicializaFila();
    fila1=inicializaFila();
    fila2=inicializaFila();
    fila3=inicializaFila();
    fila4=inicializaFila();
    fila5=inicializaFila();
    fila6=inicializaFila();
    fila7=inicializaFila();
    fila8=inicializaFila();
    fila9=inicializaFila();

    fila* vetorRadix[b]={fila0,fila1,fila2,fila3,fila4,fila5,fila6,fila7,fila8,fila9};


    for (int i =d-1;i>=0;i--){
        for(int j=0;j<n;j++){
            char str[(int)d+1];
            int k = vetorInicial[j];
            sprintf(str,"%d",vetorInicial[j]);
            vetorRadix[str[i]- '0']=pushFila(vetorRadix[str[i]- '0'],k);
        }
        int t=0;
        for (int k=0; k<b;k++){
            while (!estaVazia(vetorRadix[k])){
                vetorRadix[k]=popFila(vetorRadix[k]);
                int aux = valor;
                vetorInicial[t]=aux;
                t++;
            }
        }

    }

    printf("tabela: ");
    for (int i=0;i<n;i++){
        printf("%d ",vetorInicial[i]);
    }


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