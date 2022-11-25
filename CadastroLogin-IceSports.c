#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao, opcaoCadastro, opcaologin;
    float saldo = 589.25;
    char nomeLogin[50], senhaLogin[50];
    char nomeCadastro[50], sobrenomeCadastro[50], cpfCadastro[50], 
    emailCadastro[50], dataNascCadastro[50], sexoCadastro[1],
    nomeUserCadastro[50], senhaCadastro[50], telefoneCadastro[50];

    printf("Bem-vindo a IceSports, o melhor site de apostas do Brasil!\n");
    printf("Escolha uma das opções abaixo:\n 1 - Login na plataforma \n 2 - Cadastro na plataforma");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
        printf("Página de login IceSports\n\n");
        fflush(stdin);

        printf("Digite seu nome de usuário: \n");
        gets(nomeLogin);


        printf("Digite sua senha: \n");
        gets(senhaLogin);
        fflush(stdin);

        printf("Login realizado com sucesso!\n");
        printf("Bem-vindo, %s! Escolha uma das opções abaixo\n", nomeLogin);
        printf("1 - Apostar\n");
        printf("2 - Verificar saldo\n");
        printf("3 - Verificar histórico de apostas\n");
        printf("4 - Conta\n");
        printf("5 - Sair\n");
        printf("Digite a opção desejada");
        scanf("%d", &opcaologin);

        switch (opcaologin){
            case 1:
            printf("Apostar\n");
            break;

            case 2:
            printf("Seu saldo é de R$%2.f\n", saldo);
            break;

            case 3:
            printf("Histórico de apostas\n\n");
            printf("Nenhuma aposta realizada\n");
            break;

            case 4:
            printf("Conta\n\n");
            printf("Nome: %s\n", nomeLogin);
            printf("Nível de apostador: Elite\n");
            printf("Saldo: R$%2.f\n", saldo);
            break;

            case 5:
            printf("Você saiu da sua conta DiamondBet\n");
            break;

            default:
            printf("Opção inválida\n");
            break;
        }

        break;

        case 2:
        printf("Página de cadastro IceSports\n\n");
        fflush(stdin);

        printf("Digite seu nome: \n");
        gets(nomeCadastro);
        

        printf("Digite seu sobrenome: \n");
        gets(sobrenomeCadastro);
        fflush(stdin);
        

        printf("Digite sua data de nascimento: DD/MM/AAAA \n");
        gets(dataNascCadastro);
        fflush(stdin);

        printf("Sexo: 'M' ou 'F'\n");
        gets(sexoCadastro);

        printf("Digite seu CPF: \n");
        gets(cpfCadastro);
        fflush(stdin);

        printf("Digite seu e-mail: \n");
        gets(emailCadastro);
        fflush(stdin);

        printf("Digite seu número de telefone com o DDD: \n");
        gets(telefoneCadastro);
        fflush(stdin);

        printf("Crie um nome de usuário: \n");
        gets(nomeUserCadastro);
        fflush(stdin);

        printf("Crie uma senha: \n");
        gets(senhaCadastro);

        printf("Confirme seus dados: \n");

        
        printf("\n Nome: %s\n", nomeCadastro);
        printf("\n Sobrenome: %s\n", sobrenomeCadastro);
        printf("\n Data de nascimento: %s\n", dataNascCadastro);
        printf("\n Sexo: %s\n", sexoCadastro);
        printf("\n CPF: %s\n", cpfCadastro);
        printf("\n E-mail: %s\n", emailCadastro);
        printf("\n Telefone: %s\n", telefoneCadastro);
        printf("\n Nome de usuário: %s\n", nomeUserCadastro);

        printf("Digite 1 para confirmar ou 2 para cancelar: \n");
        scanf("%d", &opcaoCadastro);

        if(opcaoCadastro == 1){
            printf("Cadastro realizado com sucesso!\n");
        } else {
            printf("Cadastro cancelado!\n");
        }

        default: 
        printf("Opção inválida! \n");
    }

}
