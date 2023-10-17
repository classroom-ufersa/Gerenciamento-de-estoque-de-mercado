#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include"produto.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//declaração avançada de produto
struct produto;
typedef struct produto Produto;
/**struct para os campos do departamento*/
typedef struct departamento Departamento;
//Função para criar o departamento 
Departamento* cria_departamento(char nome[],char porte[]);
//Função para deixar as letras em maiusculo 
void capitalizeString(char *str);

Departamento *criarDepartamento();
//Função para liberar a memória alocada de departamento 
void liberarDepartamento(Departamento *departamento);

/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento *departamento, Produto* prod);
//Função para adicionar os produtos ao departamento 
Departamento *add_prod_dep(Departamento *depar, Produto *prod, char nome_depart[]);
#endif //DEPARTAMENTO_H
