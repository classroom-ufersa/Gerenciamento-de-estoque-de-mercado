#include"departamento.c"

int main(void)
{
  char  removido[50];
  Produto* produto; 
  Departamento* departamento;
  int contador_produto = 0,estoque;
  char nome_produto[50],tipo_produto[50],data_fabricacao,data_validade;
  float preco;
//ListaProduto* list_insere = produto;
  int opcao;

    do {
        // Menu
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Remover produto\n");
        printf("3. Listar produtos cadastrados\n");
        printf("4. Editar produtos\n");
        printf("5. Buscar produtos\n");
        printf("6. Consultar produtos em um dado departamento\n");
        printf("7. Consultar quantidade de produtos por departamento\n");
        printf("8. Sair\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
               Produto* novo= (Produto*)malloc(sizeof(Produto));
               if(novo == NULL){
                printf("Erro ao alocar memoria!\n");
                exit(1);
               }
        printf("Tipo do produto:\n");
        scanf(" %[^\n]",tipo_produto);
         capitalizeString(tipo_produto);
        printf("Nome do produto:\n");
        scanf(" %[^\n]", nome_produto);
        capitalizeString(nome_produto);
        printf("Preco:\n");
        scanf("%f",&preco);
        printf("Data de fabricacao (dia mes ano):\n");
        scanf(" %[^\n]",data_fabricacao);
        printf("Data de validade (mes ano):\n");
        scanf(" %[^\n]",data_validade);
        preencherDepartamento(&produto->departamento);
        printf("Quantidade de estoque:\n");
        scanf("%d",&estoque);
        novo[contador_produto] = cria_prod(tipo_produto,nome_produto,&preco,data_fabricacao,data_validade,departamento,&estoque);
        contador_produto++;
            case 2:
                printf("Informe o nome do produto a ser removido:");
                scanf(" %[^\n]",removido);
                remover_produto(produto,retira);
                break;
            case 3:
                imprime_produto(produto);
                break;
            case 4:
                editar_produto(produto);
                break;
            case 5:
                buscar_produto(produto);
                break;
            case 6:
                consultar_departamento(produto);
                break;
            case 7:
                consultar_quantidade_departamento(produto);
                break;
            case 8:
                printf("Saindo...\n");
                exit(1);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 8);

    return 0;
}
    
