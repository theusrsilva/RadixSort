#include <stdlib.h>
#include <stdio.h>

typedef struct item{
    int dado;
    struct item* prox;
}Item;

typedef struct queue{
    Item* inicio;
    Item* fim;

}fila;
int valor;

fila* inicializaFila(){
    fila* new = (fila*)malloc(sizeof(fila));
    new->inicio=new->fim=NULL;
    return new;
}
fila* pushFila(fila* f, int n){
    Item* novo=(Item*)malloc(sizeof(Item));
    if (novo == NULL){
        printf("Memoria cheia!");
        return 0;
    }else {
        novo->dado=n;
        novo->prox=NULL;
        if(f->fim!=NULL){
            f->fim->prox=novo;
        }else{
            f->inicio=novo;
        }
        f->fim=novo;
        return f;
    }

}
fila* popFila(fila* f){
    if (f->inicio!=NULL){
        Item*aux = f->inicio;
        f->inicio=f->inicio->prox;
        if(f->inicio==NULL){
            f->fim=NULL;
        }
        valor=aux->dado;
        free(aux);

    }else{
        printf("--PILHA VAZIA--");
    }
    return f;

}

void exibeFila(fila* f){
    Item* p = f->inicio;
    if(f->inicio!=NULL) {
        while (p!=NULL) {
            printf("%d ", p->dado);
            p=p->prox;
        }
    }else{
        printf("Fila vazia.");
    }


}
