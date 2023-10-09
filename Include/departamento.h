#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**struct para os campos do departamento*/
typedef struct{
    char nome[20];
    char produto[20];
    char porte[8];
    
}Departamento;

void capitalizeString(char *str);
Departamento *criarDepartamento();
void liberarDepartamento(Departamento *departamento);
/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento* departamento);
