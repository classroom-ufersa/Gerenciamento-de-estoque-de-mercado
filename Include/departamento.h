#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"produto.h"
/**struct para os campos do departamento*/
typedef struct departamento Departamento;

Departamento* cria_departamento(char nome[20],char porte[50], int codigo, Produto* produto);
void capitalizeString(char *str);
Departamento *criarDepartamento();
void liberarDepartamento(Departamento *departamento);
/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento* departamento);

#endif //DEPARTAMENTO_H