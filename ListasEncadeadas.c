#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}NoLista;

NoLista *criarLista(){
    return NULL;
}

int estaVazia(NoLista **l){
    return(*l == NULL);
    
}

int insereListaInicio(NoLista **l,int v){
    NoLista *n = (NoLista*)malloc(sizeof(NoLista));
    if(n!= NULL){            
        n->info = v;
        n->prox = *l;
        *l=n;
    }else{
        printf("NÃO ALOCOU ESPAÇO");
    }
}

void imprimeLista(NoLista **l){
    if(!estaVazia(l)){
        NoLista *n = *l;
        int t = 0;
        while(n != NULL){
            printf("POSIÇÃO [%d] || VALOR[%d]\n",t,n->info);
            n = n->prox;
            t++;
        }
    }else{
        printf("LISTA VAZIA");
    }
}
int qtdElementos(NoLista **l){
    if(!estaVazia(l)){
        int c = 0;
        NoLista *p = *l;
        while(p != NULL){
            c++;
        }
        return(c);
    }else{
        return(0);
    }
} 


NoLista* ultimo(NoLista **l){
    if(!estaVazia(l)){
        NoLista *p = *l;
        while(p != NULL){
            if(p->prox == NULL){
                return p;
            }
        }
    }
}
