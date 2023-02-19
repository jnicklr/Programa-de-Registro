#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct registro{
	int idade;
	float altura;
	float peso;
	char nome[50];
};

int main (void){
	
	setlocale(LC_ALL, "portuguese");
	
	int i, n, op, opcao, codigo, j, alt, retorno;
	j = 0;
	char user[50];
	int senha = 1903;	
	
	struct registro lista[50];
	
	printf("---- LOGIN ----\n");
	printf("Usuário: ");
	scanf("%50[^\n]s", user);
	fflush(stdin);
	printf("Senha: ");
	scanf("%d", &codigo);
	fflush(stdin);
	
	do {
		if (senha == codigo){
		system("cls");
		printf("------- PROGRAMA DE REGISTRO -------\n");
		printf("Seja Bem-vindo, %s!!!\n", user);
		printf("------------------------------------\n");
		printf("1 - Inserir Dados.\n2 - Alterar Dados.\n3 - Visualizar Dados.\n4 - Sair.\n");
		printf("------------------------------------\n");
		printf("Digite a opção que deseja acessar: ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch (opcao){
			case 1:
				system("cls");
				printf("------- REGISTRO -------\n");
				printf("Quantas contas serão registradas? ");
				scanf("%d", &n);
				fflush(stdin);
				system("cls");
				
				
				for (i = j; i < n+j; i++){
					printf("------- REGISTRO -------\n");
					printf("Digite o seu nome: ");
					scanf("%50[^\n]s", &lista[i].nome);
					fflush(stdin);
					printf("Digite a sua idade: ");
					scanf("%d", &lista[i].idade);
					fflush(stdin);
					printf("Digite o seu peso: ");
					scanf("%f", &lista[i].peso);
					fflush(stdin);
					printf("Digite a sua altura: ");
					scanf("%f", &lista[i].altura);
					fflush(stdin);
					system("cls");	
				}
				j += n;
				
				op == 2;
				system("pause");
				break;	
				
			case 2:
				system("cls");
				
				do {
					system("cls");
					printf("------- DADOS -------\n");
					printf("Qual registro você deseja alterar?\n1 - Nome.\n2 - Idade.\n3 - Peso.\n4 - Altura.\n5 - Sair.\nDigite a opção: ");
					scanf("%d", &n);
					fflush(stdin);
					system("cls");
					
					switch (n){
					case 1:
						if (j==0){
							printf("------- DADOS -------\n");
							printf("Não existe nenhum dado registrado até o momento...\n");
							system("pause");
						} else {
							printf("------- DADOS -------\n");
							for (i = 0; i < j; i++){
								printf("Nome do %d°: %s\n", i+1, lista[i].nome);
							}
							printf("Digite o número do nome que você deseja alterar: ");
							scanf("%d", &alt);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
						
							printf("------- ALTERANDO DADOS -------\n");
							printf("Digite o novo nome: ");
							scanf("%50[^\n]s", &lista[alt-1].nome);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("O nome foi alterado com sucesso para %s\n", lista[alt-1].nome);
							system("pause");
							system("cls");
							retorno == 2;
							}
						break;		
					case 2:
						if (j==0){
							printf("------- DADOS -------\n");
							printf("Não existe nenhum dado registrado até o momento...\n");
							system("pause");
						} else {
							printf("------- DADOS -------\n");
							for (i = 0; i < j; i++){
								printf("Idade do %d° ( %s ): %d\n", i+1, lista[i].nome, lista[i].idade);	
							}
							printf("Digite o número da pessoa que você deseja alterar a idade: ");
							scanf("%d", &alt);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("------- ALTERANDO DADOS -------\n");
							printf("Digite a nova idade: ");
							scanf("%d", &lista[alt-1].idade);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("A idade foi alterada com sucesso para %d\n", lista[alt-1].idade);
							system("pause");
							system("cls");
							retorno == 2;
						}
						break;		
							
					case 3:
						if (j==0){
							printf("------- DADOS -------\n");
							printf("Não existe nenhum dado registrado até o momento...\n");
							system("pause");
						} else {
							printf("------- DADOS -------\n");
							for (i = 0; i < j; i++){
								printf("Peso do %d° ( %s ): %d\n", i+1, lista[i].nome, lista[i].peso);	
							}
							printf("Digite o número da pessoa que você deseja alterar o peso: ");
							scanf("%d", &alt);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("------- ALTERANDO DADOS -------\n");
							printf("Digite o novo peso: ");
							scanf("%d", &lista[alt-1].peso);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("O peso foi alterada com sucesso para %d\n", lista[alt-1].peso);
							system("pause");
							system("cls");
							retorno == 2;
						}
						break;
						
					case 4:
						if (j==0){
							printf("------- DADOS -------\n");
							printf("Não existe nenhum dado registrado até o momento...\n");
							system("pause");
						} else {
							printf("------- DADOS -------\n");
							for (i = 0; i < j; i++){
								printf("Altura do %d° ( %s ): %d\n", i+1, lista[i].nome, lista[i].altura);	
							}
							printf("Digite o número da pessoa que você deseja alterar o altura: ");
							scanf("%d", &alt);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("------- ALTERANDO DADOS -------\n");
							printf("Digite a nova altura: ");
							scanf("%d", &lista[alt-1].altura);
							fflush(stdin);
							printf("\n");
							system("pause");
							system("cls");
							printf("A altura foi alterada com sucesso para %d\n", lista[alt-1].altura);
							system("pause");
							system("cls");
							retorno == 2;
						}
						break;
					case 5: 
						system("cls");
						printf("Digite 1 para confirmar: ");
						scanf("%d", &retorno);
						fflush(stdin);
						system("pause");
						system("cls");
						break;
					}
				} while (retorno !=1);
				
				op == 2;
				break;	
			case 3:
				system("cls");
				if (n==0){
					printf("------- DADOS -------\n");
					printf("Não existe nenhum dado registrado até o momento...\n");
					system("pause");
				} else {
					for (i = 0; i < j; i++){
					printf("------- DADOS -------\n");
					printf("Nome do %d°: %s\n", i+1, lista[i].nome);
					printf("Idade do %d°: %d\n", i+1, lista[i].idade);
					printf("Peso do %d°: %0.2f\n", i+1, lista[i].peso);
					printf("Altura do %d°: %0.2f\n", i+1, lista[i].altura);
					printf("---------------------\n");
					system("pause");
					system("cls");
					}		
				}
				op == 2;
				break;		
			case 4:
				system("cls");
				printf("Tem certeza que deseja fechar o programa? Digite 1 ou outro número caso não: ");
				scanf("%d", &op);
				fflush(stdin);
				break;
			} 				
		} else {
			system("cls");
			printf("Senha errada, digite 1 para finalizar o programa: ");
			scanf("%d", &op);
			fflush(stdin);	
		}
	} while (op != 1);

	return 0;
}











