#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"departamento.h"

/*struct de produto*/
typedef struct produto Produto;

Produto* cria_prod(char tipo[50], char nome_produto[50], float preco,char fabric[11], char valid[11], int estoq, Departamento** depart);

void imprime_produto(Produto* prod);

 Produto* busca(Produto* prod, char nomeProd[]);

Produto* retira(Produto*l, char nome_produto[]);