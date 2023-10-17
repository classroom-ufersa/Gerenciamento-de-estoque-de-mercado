# Gerenciamento de estoque de mercado
## Tópicos:
- [Desenvolvedores](#Desenvolvedores)
- [Problemática](#Problemática)
- [Funcionalidades](#Funcionalidades)
- [Recursos utilizados](#Recursos-utilizados)
- [TAds](#TADs)
  
## Desenvolvedores:
- [Andrews Ferreira de Paiva Silva](https://github.com/TheFonci)
- [Michely Vitória Costa Felix](https://github.com/MichelyFelix)

## Problemática
Este é um projeto de sistema em linguagem `C` para criar e gerenciar um estoque de produtos de um supermercado. O sistema foi desenvolvido com o objetivo de auxiliar na organização, controle e eficiência do estoque de produtos de um supermercado.
## Funcionalidades:
- **Adicionar produto:**
  
Esta função permite a adição de informações de um produto no sistema. Ela coleta dados como o tipo do produto, nome, preço, data de fabricação, data de validade, departamento e quantidade disponível em estoque.

- **Remover produto:**
  
Esta função permite a remoção de um produto do sistema.

- **Listar produtos cadastrados:**
  
Esta função exibe uma lista de todos os produtos que foram cadastrados no sistema, como tipo do produto, data de validade e de fabricação, estoque, preço e departamento.

- **Editar produtos:**
  
Esta função permite a modificação das informações de um produto que já existe no sistema. É útil para corrigir dados incorretos ou fazer atualizações com o passar do tempo.

- **Buscar produtos:**
  
Esta função possibilita a busca de um produto específico com base no seu nome.

- **Consultar produtos disponíveis em um dado departamento:**
  
Esta função permite consultar os produtos disponíveis em um departamento específico.

- **Consultar quantidade de produtos por departamento:**
  
Esta função permite consultar a quantidade de produtos disponíveis em um departamento.

- **Sair:**
  
Esta função encerra o programa, permitindo ao usuário sair do sistema quando desejar.

## Recursos utilizados:

Neste projeto, fizemos uso de diversos recursos da programação em linguagem `C` para garantir seu funcionamento. Alguns dos recursos incluem:

- **Arquivos:**

A manipulação de arquivos permite que você leia e escreva dados em arquivos externos. Isso é fundamental para a que os dados fiquem salvos apóso fechamento do programa.

- **Alocação dinâmica:**

 A alocação dinâmica de memória permite que você aloque memória conforme necessário e libere-a quando não for mais necessário durante a execução do programa, contribuindo para uma melhor utilização dos recursos de memória.

- **Ponteiros:**

 Os ponteiros são várias que gurdam endereços de memóriade uma outra variavel.Eles são essenciais para conseguir manipular o conteúdo de uma variavel em qualquer parte do programa.  
 
- **Lista encadeada simples:**

Listas encadeadas simples são nós que possuem informações e um ponteiro que aponta para o próximo nó da lista. Essas estruturas são utilizadas para armazenar informações de forma organizada, possibilitando a implementação de estruturas de dados flexíveis.

- **Tipos estruturados:**
  
Os tipos estruturados são usados para agrupar diferentes variáveis em uma única entidade, permitindo assim criara um novo tipo de variável.

- **TAD:**

Tipos abstratos de dados(TADs) é um conceito que encapsula um conjunto de dados e as funções deles. Ele fornece uma interface clara para acessar e manipular os dados, ocultando os detalhes da implementação.

## TADs:

 **Departamento.h**
```
#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include"produto.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//declaração avançada de produto
struct produto;
typedef struct produto Produto;
/**struct para os campos do departamento*/
typedef struct departamento Departamento;
//Função para criar o departamento 
Departamento* cria_departamento(char nome[],char porte[]);
//Função para deixar as letras em maiusculo 
void capitalizeString(char *str);

Departamento *criarDepartamento();
//Função para liberar a memória alocada de departamento 
void liberarDepartamento(Departamento *departamento);

/*Função para preencher os dados do departamento*/
void preencherDepartamento(Departamento *departamento, Produto* prod);
//Função para adicionar os produtos ao departamento 
Departamento *add_prod_dep(Departamento *depar, Produto *prod, char nome_depart[]);
#endif //DEPARTAMENTO_H
```

 **Produto.h**
```#ifndef PRODUTO_H
#ifndef PRODUTO_H
#define PRODUTO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"departamento.h"
//declaração avançada de departamento
//struct departamento;
//typedef departamento Departamento;
/*struct de produto*/
typedef struct produto Produto;
//Função para criar a lista de produto
Produto* cria_prod(char tipo[], char nome_produto[], float preco,char fabric[], char valid[], int estoq);
//Função utilizada para listar os produtos
void imprime_produto(Produto* prod);
//Função que faz a busca do produto
 Produto* busca(Produto* prod, char nomeProd[]);
//Função de retirar um produto
Produto* retira(Produto*l, char nome_produto[]);
//Função para inserir ordenado na lista
Produto* insere_ordenado(Produto* produto, char* n);

Produto* ler_arquivo(Produto* produto, int* tam);

void grava_arquivo(Produto**produto);
//Função utilizada para liberar a lista
void libera_lista(Produto*l);
//Função para le uma opção
char le_op(int menor_valor, int maior_valor);
//Função de limpar Buffer
void limparBuffer(void);
//Função para editar um produto
void editar_produto(Produto* prod);


#endif // PRODUTO_H
```
