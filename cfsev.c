//////////////////////////////////////////////////////////////////////
///         Universidade Federal do Rio Grande do Norte            ///  
///            Centro de Ensino Superior do Serido                 ///   
///            Bacharelado em Sistema de Informacao                ///   
///              Disciplina DCT1106 -- Programacao                 ///   
///         Um Sistema de Controle de Fluxo de Veiculos            ///   
///      Developed by  @italx_g and @sza_lucas - Jan, 2021         ///   
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/// 
///  Assinaturas das funções
///
char menuPrincipal(void);
void moduloInformacoes(void);
void telaSobre(void); 

void moduloUsuario(void);
char menuUsuario(void); 
char telaCadastrarUsuario(void);
void atualizarCadastro(void);
void atualizarCadastroDois(void);
void telaPesquisa(void);
void telaPesquisaDois(void);
void deletarUsuario(void);

void moduloVagas(void);
char menuVagas(void); 
char totalVagas(void); 
char vagasLivres(void); 
char vagasOcupadas(void);

void moduloHistorico(void);
char menuHistorico(void);

///
/// Programa Principal
///
int main(void) {
		char opcao;
		do {
			opcao = menuPrincipal();
			switch(opcao) {

					case '1':		moduloUsuario();
	                                break;
					case '2':		moduloVagas();
									break;
					case '3':		moduloHistorico();
									break;
					case '4':		moduloInformacoes();
									break;								
			}
		
		} while (opcao != '0');
		return 0;
}

char menuPrincipal(void) {
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
		printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           1. Modulo usuario                                           ///\n");
		printf("///           2. Modulo vagas                                             ///\n");
		printf("///           3. Modulo historico                                         ///\n");
		printf("///           4. Informacoes sobre o sistema                              ///\n");
		printf("///           0. Encerra o programa                                       ///\n");
		printf("///                                                                       ///\n");
		printf("///           Escolha a opcao desejada: ");
		scanf("%c", &op);
		getchar();		
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return op;
}

//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////TELA SOBRE///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void moduloInformacoes(void) {

	telaSobre();

}

void telaSobre(void) {
system("clear");
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///              Universidade Federal do Rio Grande do Norte              ///\n");
		printf("///                  Centro de Ensino Superior do Serido                  ///\n");
		printf("///                Departamento de Computacao e Tecnologia                ///\n");
		printf("///                   Disciplina DCT1106 -- Programacao                   ///\n");
		printf("///        Projeto Controle do fludo da saida e entrada de veiculos       ///\n");
		printf("///            Developed by  @italx_g and @sza_lucas - Jan, 2021          ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = = = = = =   Programa CFSEV    = = = = = = = =          ///\n");
		printf("///          = Controle do Fluxo da Saida/Entrada de Veiculos  =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///                                                                       ///\n");
		printf("///  Programa utilizado na disciplina DCT1106 - Programacao. Esse pro-    ///\n");
		printf("///  grama ira controlar o fluxo de veiculos para a entrada e saida em    ///\n");
		printf("///  estacionamentos, tendo como alvo as instituicoes publicas ou priva-  ///\n");
		printf("///  das que oferecem estacionamento gratuito.                            ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		printf("\t\t\t>>> Tecle <ENTER> para voltar...\n");
		getchar();
}

//////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////TELA USUARIO///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

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
	char placa[7];
	char nome[51];
	char email[51];
	char nasc[11];
	char celular[12];

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
		printf("///           Placa do Veículo (apenas números): ");
		scanf("%[0-9 A-Z]", placa);
		getchar();
		printf("///           Nome completo: ");
		scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
		getchar();
		printf("///           E-mail: ");
		scanf("%[a-z@.]", email);
		getchar();
		printf("///           Data de Nascimento (dd/mm/aaaa):  ");
		scanf("%[0-9/]", nasc);
		getchar();
		printf("///           Celular  (apenas números): ");
		scanf("%[0-9]", celular);
		getchar();                                                                   
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
}

void telaPesquisa(void) {
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
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal.                     ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
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
		printf("///           E-mail: ----------------                                    ///\n");
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
		printf("///           Novo e-mail:                                                ///\n");
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

//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////MENU VAGAS///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void moduloVagas(void) {
		char opcao;
		do {
			opcao = menuVagas();
			switch(opcao){
				
					case '1':		totalVagas();
	                                break;
					case '2':		vagasLivres();
									break;
					case '3':		vagasOcupadas();
									break;								
			}					
		} while (opcao != '0');
}

char menuVagas(void) {
system("clear");
	char op;
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
		printf("///           = = = = = = = = =  Menu Vagas = = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           1. Total de vagas                                           ///\n");
		printf("///           2. Vagas livres                                             ///\n");
		printf("///           3. Vagas em uso                                             ///\n");
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

char totalVagas(void) {
system("clear");
	char op;
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
		printf("///           = = = = = = =   Total de Vagas  = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Total de vagas: ---                                         ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal: \n");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return op; 
}

char vagasLivres(void) {
system("clear");
	char op;
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
		printf("///           = = = = = = = =   Vagas livres  = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Vagas livres: ---                                           ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal: \n");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return op;
} 

char vagasOcupadas(void) {
system("clear");
	char op;
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
		printf("///           = = = = = = =   Vagas Ocupadas    = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///           Vagas ocupadas: ---                                         ///\n");
		printf("///                                                                       ///\n");
		printf("///           Digite 0 para voltar ao menu principal:\n");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return op;
}

//////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////MENU HISTORICO/////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void moduloHistorico(void) {
		char opcao;
		do {
			opcao = menuHistorico();
			switch(opcao){
				
					case '1':		menuHistorico();								
			}					
		} while (opcao != '0');
}

char menuHistorico(void) {
system("clear");
	char op;
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
		printf("///           = = = = = = = = = = Historico = = = = = = = = =             ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("///           1. Historico do uso de vagas no ultimo dia                  ///\n");
		printf("///           0. Voltar ao menu anterior                                  ///\n");
		printf("///                                                                       ///\n");
		printf("///           Escolha a opção desejada: ");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		return op;
}
