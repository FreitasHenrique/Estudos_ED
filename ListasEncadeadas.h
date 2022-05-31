typedef struct no{
    int info;
    struct no *prox;
}NoLista;

NoLista *criarLista();

int estaVazia(NoLista **l);

int insereListaInicio(NoLista **l,int v);

void imprimeLista(NoLista **l);

int qtdElementos(NoLista **l);

NoLista* ultimo(NoLista **l);