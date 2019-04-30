#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
typedef struct dados{
    int valor;
    struct dados *prox;
}fila;

fila* inicializaFila(){
    return NULL;
}
fila* pushFila(fila* f, int n){
    fila* novo=(fila*)malloc(sizeof(fila));
    novo->valor=n;
    novo->prox=NULL;
    fila *aux = f;
    if(f!=NULL){
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }else{
        f = novo;
    }
    return f;
}
fila* popFila(fila* f){
    if (f!=NULL){
        fila *aux = f;
        f = f->prox;
        int valor = aux->valor;
        free(aux);
        return f;
    }else{
        printf("underflow");
        return NULL;
    }
}
void exibeFila(fila* f){
    fila* p;
    if(f!=NULL) {
        printf("Fila: ");
        for (p = f; p != NULL; p = p->prox)
            printf("%d ", p->valor);
    }else{
        printf("Fila vazia.");
    }


}

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