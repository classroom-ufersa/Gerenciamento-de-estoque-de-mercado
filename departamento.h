#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[20];
    char produto[20];
    char porte[8];
    
}Departamento;

void capitalizeString(char *str);
void preencher(Departamento* departamento);

