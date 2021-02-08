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
#include <locale.h>

/// 
///  Assinaturas das funções
///
char menuPrincipal(void); 
void telaSobre(void); 
char menuUsuario(void); 
char menuVagas(void); 
char TotalVagas(void); 
char VagasLivres(void); 
char VagasOcupadas(void);
char telaCadastrarUsuario(void); 
void telaPesquisa(void); 
void telaPesquisaDois(void); 
void AtualizarCadastro(void); 
void AtualizarCadastroDois(void); 
void DeletarUsuario(void); 
char menuHistorico(void); 


///
/// Programa Principal
///
int main(void) {
		char opcao;
		opcao = menuPrincipal();
		telaSobre();
		opcao = menuUsuario();
		opcao = menuVagas();
		opcao = TotalVagas();
		opcao = VagasLivres();
		opcao = VagasOcupadas();
		telaCadastrarUsuario();
		telaPesquisa();
		telaPesquisaDois();
		AtualizarCadastro();
		AtualizarCadastroDois();
		DeletarUsuario();
		opcao = menuHistorico();
		return 0;
}


char menuPrincipal(void) {
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
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		getchar();
		return op;
}

//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////TELA SOBRE///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
}

//////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////TELA USUARIO///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

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
		printf("///           2. Pesquisar os dados de um Usuario                         ///\n");
		printf("///           3. Atualizar o cadastro de um Usuario                       ///\n");
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
		getchar();
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
		getchar();
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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
}

void AtualizarCadastro(void) {
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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
}

void AtualizarCadastroDois(void) {
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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
}

void DeletarUsuario(void) {
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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
}

//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////MENU VAGAS///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

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
		getchar();
		return op;
}

char TotalVagas(void) {
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
		printf("///           Digite 0 para voltar ao menu principal:                     ///\n");
		printf("///                                                                       ///\n");
		printf("///           Total de vagas: ");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		getchar();
		return op; 
}

char VagasLivres(void) {
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
		printf("///           Digite 0 para voltar ao menu principal:                     ///\n");
		printf("///                                                                       ///\n");
		printf("///           Vagas livres: ");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		getchar();
		return op;
} 

char VagasOcupadas(void) {
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
		printf("///           Digite 0 para voltar ao menu principal:                     ///\n");
		printf("///                                                                       ///\n");
		printf("///           Vagas ocupadas: ");
		scanf("%c", &op);
		getchar();
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		getchar();
		return op;
}

//////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////MENU HISTORICO/////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

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
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
		return op;
}
