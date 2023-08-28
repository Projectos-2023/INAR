#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0
typedef int bool;
typedef int TIPOPESO;

#define BRANCO 0
#define AMARELO 1
#define VERMELHO 2

struct No
{
    int numero;
    struct No *esquerda;
    struct No *direita;
};
typedef struct No No;

typedef struct adjacencia{
    int vertice;
    TIPOPESO peso;
    struct adjacencia *prox;
}ADJACENCIA;

typedef struct vertice{
    ADJANCENCIA *cab;
}VERTICE;

typedef struct arvore{
    int vertices,arestas;
    VERTICE *adj;
}Arvore;

typdef struct pilha{
    int dado;
    struct no *proximo;
}Pinha;


void criarArvore(No **pRaiz)
{
    *pRaiz = NULL;
}

void profundidade(No *pArvore){
    int cor[pArvore->vertices];

    int u;
    for(u=0;u<pArvore->vertices;u++){
        cor[u]=BRANCO;
    }
    for(u=0; u<pArvore;u++){
        if (cor[u]==BRANCO)
            visitaP(g,u,cor);
    }

}

void visitaP(No *pArvore,int u, int *cor){
    cor[u]=AMARELO;
    ADJACENCIA *v=g->adj[u].cab;
    while(v){
        if(cor[v->vertice]==BRANCO){
            visitaP(g,v->vertice,cor);
        }
        v=v->prox;
    }
    cor[u]=VERMELHO;
}


void insercao(No **pRaiz, int numero2)
{
	if (*pRaiz == NULL)
	{
	      *pRaiz=(No *)malloc(sizeof (No));
	      (*pRaiz)->esquerda=NULL;
	      (*pRaiz)->direita=NULL;
	      (*pRaiz)->numero=numero2;
	}
	else 
        {
		if (numero2 < ((*pRaiz)->numero))
		{
			insercao(&((*pRaiz)->esquerda), numero2);
		}
		else
		{
			insercao(&((*pRaiz)->direita), numero2);
		}
	}
}

/*
    Procedimento para imprimir uma árvore binária
*/
void imprimir_versao_1(NoArv *pRaiz){
    if(pRaiz){
        printf("%d ", pRaiz->valor);
        imprimir_versao_1(pRaiz->esquerda);
        imprimir_versao_1(pRaiz->direita);
    }
}

void push(Pilha **topo,int dado){
    Pilha *novo=malloc(sizeof(Pilha));
    novo->dado=dado;
    novo->prox=NULL;
    if(*topo){
        topo->dado=dado;
        topo->proximo=NULL;
}

int main(){

    No *pRaiz=NULL;
    Pilha *topo=NULL;

    insercao(&pRaiz,10);
    insercao(&pRaiz,12); 
    insercao(&pRaiz,16);
    insercao(&pRaiz,8);
    insercao(&pRaiz,60);
    insercao(&pRaiz,42);
    insercao(&pRaiz,14);
    insercao(&pRaiz,7);
    insercao(&pRaiz,56);
    insercao(&pRaiz,45);
    insercao(&pRaiz,13);
    insercao(&pRaiz,47);
    insercao(&pRaiz,90);
    insercao(&pRaiz,19);
    insercao(&pRaiz,32);
    insercao(&pRaiz,87);
    insercao(&pRaiz,64);
    insercao(&pRaiz,5);
    insercao(&pRaiz,34);
    insercao(&pRaiz,94);

    imprimir_verso_1(pRaiz);

    

    return 0;
}