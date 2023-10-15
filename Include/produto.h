#ifndef PRODUTO_H
#define PRODUTO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"departamento.h"
//declaração avançada de departamento
//struct departamento;
//typedef departamento Departamento;
/*struct de produto*/
typedef struct produto Produto;

Produto* cria_prod(char tipo[], char nome_produto[], float preco,char fabric[], char valid[], int estoq);

void imprime_produto(Produto* prod);

 Produto* busca(Produto* prod, char nomeProd[]);

Produto* retira(Produto*l, char nome_produto[]);

Produto* insere_ordenado(Produto* produto, char* n);

Produto** ler_arquivo(Produto** produto, int* tam);

void grava_arquivo(Produto**produto);

void libera_lista(Produto*l);

char le_op(int menor_valor, int maior_valor);

void limparBuffer(void);

void editar_produto(Produto* prod);


#endif // PRODUTO_H