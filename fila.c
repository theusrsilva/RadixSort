#include <stdlib.h>

typedef struct dados{
    int valor;
    struct dados *prox;
}fila;
int valor;

fila* inicializaFila(){
    return NULL;
}
fila* pushFila(fila* f, int n){
    fila* novo=(fila*)malloc(sizeof(fila));
    if (novo == NULL){
        printf("Memoria cheia!");
        return 0;
    }else {
        novo->valor = n;
        novo->prox = NULL;
        fila *aux = f;
        if (f != NULL) {
            while (aux->prox != NULL) {
                aux = aux->prox;
            }
            aux->prox = novo;
        } else {
            f = novo;
        }
        return f;
    }
}
fila* popFila(fila* f){
    if (f!=NULL){
        fila *aux = f;
        f = f->prox;
        valor = aux->valor;
        free(aux);
        return f;
    }else{
        printf("underflow");
        return NULL;
    }
}
int estaVazia(fila* f){
    if (f==NULL){
        return 1;
    }else{
        return 0;
    }
}
void exibeFila(fila* f){
    fila* p;
    if(f!=NULL) {
        for (p = f; p != NULL; p = p->prox)
            printf("%d ", p->valor);
    }else{
        printf("Fila vazia.");
    }


}
