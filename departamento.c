#include"departamento.h"

void capitalizeString(char *str)
{
    if (str[0] != '\0')
    {
        str[0] = toupper(str[0]);
        for (int i = 1; str[i] != '\0'; i++)
        {
            str[i] = tolower(str[i]);
        }
    }
}

void preencher(Departamento* departamento){

printf("Nome do departamento");
scanf(" %[^\n]", departamento->nome);
capitalizeString(departamento->nome);
printf("Produto");
scanf(" %[^\n]", departamento->produto);
capitalizeString(departamento->produto);
printf("Porte do produto");
char porte[10];

while(porte != 'Grande' || porte != 'Medio' || porte != 'Pequeno'){
    scanf(" %[^\n]", departamento->porte);
    capitalizeString(departamento->porte);
}
 
}
