#include"departamento.c"

int main(void)
{
ListaProduto* list_insere = Produto;
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
                printf("Deseja adicionar um novo produto?");
                preenche_produto(Produto);
            case 2:
                remover_produto(Produto);
                break;
            case 3:
                listar_produtos(Produto);
                break;
            case 4:
                editar_produto(Produto);
                break;
            case 5:
                buscar_produto(Produto);
                break;
            case 6:
                consultar_departamento(Produto);
                break;
            case 7:
                consultar_quantidade_departamento(Produto);
                break;
            case 8:
                sair(Produto);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 8);

    return 0;
}
    
