#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*struct de departamento */
typedef struct{
    char nome[20];
    char produto[20];
    char porte[8];
    
}Departamento;
/*Função para colocar a primeira letra do nome em maiusculo*/ 
void capitalizeString(char *str);
/*Função para preencher os dados do departamento*/
void preencher(Departamento* departamento);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**s truct para os campos do departamento*/
typedef struct{
    char nome[20];
    char produto[20];
    char porte[8];
    
}Departamento;
void capitalizeString(char *str);
/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento* departamento);
