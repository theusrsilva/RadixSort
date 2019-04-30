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
