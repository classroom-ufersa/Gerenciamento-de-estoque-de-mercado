#include"departamento.c"
#include"produto.c"

int main(void)
{ 
  Departamento* departamento = NULL;
  int n = 0, opcao;
  int Valorvalido = 0;

    do {

        ordenarLinhasArquivo();

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

        while (!Valorvalido)
        {
            if (scanf("%d", &opcao) == 1)
            {
                // A leitura foi bem-sucedida, o valor é um número inteiro
                if (opcao >= 1 && opcao <= 3)
                {
                    // Verifica se o número é menor ou igual a 3
                    Valorvalido = 1;
                }
                else
                {
                    printf("Digite uma das opcoes do menu.\n");
                }
            }
            else
            {
                // A leitura não foi bem-sucedida, o valor não é um número inteiro
                printf("Digite uma das opcoes do menu.\n");
                while (getchar() != '\n')
                    ;
            }
        }
        Valorvalido = 0;

        switch (opcao) {
            case 1:
            while (opcao != 2)
            {
                departamento = (Departamento *)realloc(departamento, (n + 1) * sizeof(Departamento));

                if (produto == NULL)
                {
                    printf("Memoria insuficiente!\n");
                    exit(1);
                }

                preencher(&produto[n]); // Passa o endereço do funcionário atual
                n++;

                printf("Registrar novo produto?\n1 = Sim\t2 = Nao: ");
                while (!Valorvalido)
                {
                    if (scanf("%d", &opcao) == 1)
                    {
                        // A leitura foi bem-sucedida, o valor é um número inteiro
                        if (opcao == 1 || opcao == 2)
                        {
                            Valorvalido = 1; // Se o usuário escolher 1, o loop continua
                        }
                        else
                        {
                            printf("Digite uma das opcoes do menu (1 ou 2).\n");
                        }
                    }
                    else
                    {
                        // A leitura não foi bem-sucedida, o valor não é um número inteiro
                        printf("Digite uma das opcoes do menu (1 ou 2).\n");
                        while (getchar() != '\n')
                            ;
                    }
                }
                Valorvalido = 0;
            }
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
            void editar_produto(Produto* prod);
                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;
            case 8:
                printf("Saindo...\n");
                exit(1);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 8);

free (departamento);
return 0;
}
    
