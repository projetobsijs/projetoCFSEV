#include <stdio.h>
#include <stdlib.h>
#include "moduloUsuario.h"

void pesquisarveiculo(void) {
	Usuario *user;
	char *placa;
	placa = telaPesquisa;

}



typedef struct usuario Usuario;

void moduloUsuario(void){
		char opcao;
		do {
			opcao = menuUsuario();
			switch(opcao){
				
					case '1':		telaCadastrarUsuario();
	                                break;
					case '2':		atualizarCadastro();
									break;
					case '3':		telaPesquisa();
									break;
					case '4':		deletarUsuario();
									break;								
			}					
		} while (opcao != '0');
}

char menuUsuario(void) {
	char op;
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = = = =  Menu Usuario = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           1. Cadastrar um novo Usuario                                ///\n");
		printf("///           2. Atualizar o cadastro de um Usuario                       ///\n");
		printf("///           3. Pesquisar os dados de um Usuario                         ///\n");
		printf("///           4. Excluir um Usuario do sistema                            ///\n");
		printf("///           0. Voltar ao menu anterior                                  ///\n");
		printf("///                                                                       ///\n");
		printf("///           Escolha a opcao desejada: ");
		scanf("%c", &op);
		getchar();		
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return op;
}

char telaCadastrarUsuario(void) { 

Usuario *user;

user = (Usuario*) malloc(sizeof(Usuario));


system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = = = Cadastrar Usuario = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Placa do Veículo: %s", user->placa);
		scanf("%[0-9 A-Z]", user->placa);
		getchar();
		printf("///           Nome completo: %s", user->nome);
		scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", user->nome);
		getchar();
		printf("///           Celular: %s ", user->celular);
		scanf("%[0-9]", user->celular);
		getchar();                                                                   
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
free(user);
}

char* telaPesquisa(void) {
	char* placa;
	placa = (char*) malloc(sizeof(char));
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = = Pesquisa de Usuario = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite o nome do Usuario:                                   ///\n");
		scanf("%[0-9 A-Z]",placa);
		getchar();
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal.                     ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return placa;
}

void telaPesquisaDois(void) {
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = = Pesquisa de Usuario = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Usuario 'nome' escolhido.                                   ///\n");
		printf("///           Nome: ------------------                                    ///\n");
		printf("///           Celular: ---------------                                    ///\n");
		printf("///           Veiculo: ---------------                                    ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
}

void atualizarCadastro(void) {
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = Atualizacao de cadastro = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite o nome do Usuario:                                   ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal.                     ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
}

void atualizarCadastroDois(void) {
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = Atualizacao de cadastro = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Usuario 'nome' escolhido.                                   ///\n");
		printf("///           Novo nome:                                                  ///\n");
		printf("///           Novo celular:                                               ///\n");
		printf("///           Novo veiculo:                                               ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
}

void deletarUsuario(void) {
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///           Developed by  @italx_g and @sza_lucas - Jan, 2021           ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = = = = = Excluir Usuario = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Informe o Usuario desejado:                                 ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal.                     ///\n");	
		printf("///                                                                       ///\n");			
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
}