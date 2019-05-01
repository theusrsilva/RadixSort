#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "fila.c"
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
    printf("tabela: ");
    for (int i=0;i<n;i++){
        printf("%d ",vetorInicial[i]);
    }

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
    fila* vetorRadix[10]={fila0,fila1,fila2,fila3,fila4,fila5,fila6,fila7,fila8,fila9};

}
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