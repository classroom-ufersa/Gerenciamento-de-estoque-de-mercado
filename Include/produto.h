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
//Função para criar a lista de produto
Produto* cria_prod(char tipo[], char nome_produto[], float preco,char fabric[], char valid[], int estoq);
//Função utilizada para listar os produtos
void imprime_produto(Produto* prod);
//Função que faz a busca do produto
 Produto* busca(Produto* prod, char nomeProd[]);
//Função de retirar um produto
Produto* retira(Produto*l, char nome_produto[]);
//Função para inserir ordenado na lista
Produto* insere_ordenado(Produto* produto, char* n);

Produto* ler_arquivo(Produto* produto, int* tam);

void grava_arquivo(Produto**produto);
//Função utilizada para liberar a lista
void libera_lista(Produto*l);
//Função para le uma opção
char le_op(int menor_valor, int maior_valor);
//Função de limpar Buffer
void limparBuffer(void);
//Função para editar um produto
void editar_produto(Produto* prod);


#endif // PRODUTO_H
