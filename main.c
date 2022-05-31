#include "ListasEncadeadas.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    NoLista* lista;
    int i = 10;
    
    lista = criarLista();
    
    insereListaInicio(&lista,i);
    i = 5;
    insereListaInicio(&lista,i);
    imprimeLista((&lista));
    i = qtdElementos(&lista);
    printf("%d",i);
    return (0);
}

