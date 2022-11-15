#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;



void TelaLogin(){

    char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];        
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    }

}

void CadastroClientes(){

    printf("\n\nAdicione os dados do Cliente\n");

}

void CadastroCorretores(){

    printf("\n\nAdicione os dados do Corretor\n");

}

int main(){

    setlocale(LC_ALL, "");

    TelaLogin();

    MostrarMenu();

        switch (opcao)

        {

            case 1 : // Gravar Clientes

                CadastroClientes();

            break;

            case 2 : // Gravar Corretores

                CadastroCorretores();

            break;

            default :

                printf("Opção Invalida!");

            break;    
        }

        getchar();



    return 0;
}