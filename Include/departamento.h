#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**struct para os campos do departamento*/
typedef struct departamento{
}Departamento;

void capitalizeString(char *str);
Departamento *criarDepartamento();
void liberarDepartamento(Departamento *departamento);
/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento* departamento);
