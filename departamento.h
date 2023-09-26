#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[20];
    char produto[20];
    char porte[8];
    
}Departamento;

void capitalizeString(char *str);
/*Função para preencher os dados do departamento*/
void preencher(Departamento* departamento);

