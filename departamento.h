#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**struct para os campos do departamento*/
typedef struct{
    char nome[20];
    char porte[8];
    struct Produto * produto;
    int numProdutos;
    
}Departamento;
void capitalizeString(char *str);
/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento* departamento);
