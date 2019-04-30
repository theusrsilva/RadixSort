#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "fila.c"
int main() {
    fila* fila1;
    fila1 = inicializaFila();
    fila1 = pushFila(fila1,1);
    fila1 = pushFila(fila1,2);
    fila1 = pushFila(fila1,3);
    fila1 = pushFila(fila1,4);
    fila1 = pushFila(fila1,5);
    fila1 = popFila(fila1);
    fila1 = popFila(fila1);
    fila1 = popFila(fila1);
    fila1 = pushFila(fila1,6);
    fila1 = popFila(fila1);
    fila1 = popFila(fila1);
    fila1 = pushFila(fila1,7);
    exibeFila(fila1);


//    int n;
//    double d;
//    srand(time(NULL));
//    printf("digite a quantidade de numeros que voce quer:\n");
//    scanf("%d",&n);
//    printf("digite a o maior digito presente:\n");
//    scanf("%lf",&d);
//    int vetorInicial[n];
//    for(int j =0;j<n;j++){
//        if(d==1){
//            vetorInicial[j]=rand() % (int)pow(10.0,d);
//        }else{
//            vetorInicial[j]=rand() % (int)pow(10.0,d);
//            while(vetorInicial[j]<(int)pow(10.0,d-1)){
//                vetorInicial[j]=rand() % (int)pow(10.0,d);
//            }
//        }
//    }
//    printf("tabela: ");
//    for (int i=0;i<n;i++){
//        printf("%d ",v[i]);
//    }
}