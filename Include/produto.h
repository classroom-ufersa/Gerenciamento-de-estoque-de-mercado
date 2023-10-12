#ifndef PRODUTO_H
#define PRODUTO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"departamento.h"

/*struct de produto*/
typedef struct produto Produto;

Produto* cria_prod(char tipo[], char nome_produto[], float preco,char fabric[], char valid[], int estoq);

void imprime_produto(Produto* prod);

 Produto* busca(Produto* prod, char nomeProd[]);

Produto* retira(Produto*l, char nome_produto[]);

#endif // PRODUTO_H
