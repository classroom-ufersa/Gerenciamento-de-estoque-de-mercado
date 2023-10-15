#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include"produto.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct departamento{
    char nomed[20];
    Produto* produto;
    char porte[8];

}Departamento;

void capitalizeString(char *str);

void preencherDepartamento(Departamento* departamento);

int compararLinhas(const void *a, const void *b);

void imprimirArquivo();

void criarArquivo(Departamento *departamento, int n);

void ordenarLinhasArquivo();

#endif //DEPARTAMENTO_H