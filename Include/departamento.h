#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include"produto.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//declaração avançada de produto
//struct produto;
//typedef struct produto Produto;
/**struct para os campos do departamento*/
<<<<<<< HEAD

=======
>>>>>>> 8f662ce9eb1d308623a3507dbbed3167fcb2db96
typedef struct departamento Departamento;
Departamento* cria_departamento(char nome[],char porte[]);
void capitalizeString(char *str);
Departamento *criarDepartamento();
void liberarDepartamento(Departamento *departamento);
/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento* departamento);
void preencherDepartamento(Departamento* produto);

#endif //DEPARTAMENTO_H