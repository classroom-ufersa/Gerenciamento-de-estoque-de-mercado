#include"departamento.h"

<<<<<<< HEAD
#include"departamento.h"

=======
>>>>>>> 1d9e93972ff8afdfaf071cfdae084c02ede509a2
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

<<<<<<< HEAD
void preencherDepartamento(Departamento* departamento){
=======
void preencher(Departamento* departamento){
>>>>>>> 1d9e93972ff8afdfaf071cfdae084c02ede509a2

printf("Nome do departamento");
scanf(" %[^\n]", departamento->nome);
capitalizeString(departamento->nome);
printf("Produto");
scanf(" %[^\n]", departamento->produto);
capitalizeString(departamento->produto);
printf("Porte do produto");
<<<<<<< HEAD
scanf(" %[^\n]", departamento->porte);

while(departamento->porte != 'Grande' || departamento->porte != 'Medio' || departamento->porte != 'Pequeno'){
    scanf(" %[^\n]", departamento->porte);
    capitalizeString(departamento->porte);
}
}

=======
char porte[10];

while(porte != 'Grande' || porte != 'Medio' || porte != 'Pequeno'){
    scanf(" %[^\n]", departamento->porte);
    capitalizeString(departamento->porte);
}
 
}
>>>>>>> 1d9e93972ff8afdfaf071cfdae084c02ede509a2
