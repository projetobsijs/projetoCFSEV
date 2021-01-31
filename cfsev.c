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
void menuPrincipal(void);
void telaSobre(void);
void menuUsuario(void);
void menuVagas(void);
void TotalVagas(void);
void VagasLivres(void);
void VagasOcupadas(void);
void telaCadastrarUsuario(void);
void telaPesquisa(void);
void AtualizarCadastro(void);
void DeletarUsuario(void);
void menuHistorico(void);


///
/// Programa Principal
///
int main(void) {
    telaSobre();
    menuPrincipal();
    menuUsuario();
    menuVagas();
    TotalVagas();
    VagasLivres();
    VagasOcupadas();
    telaCadastrarUsuario();
    telaPesquisa();
    AtualizarCadastro();
    DeletarUsuario();
    menuHistorico();
    return 0;
}


void menuPrincipal(void) {
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
	printf("///           Escolha a opcao desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
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

void menuUsuario(void) {
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
	printf("///           Escolha a opcao desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void telaCadastrarUsuario(void) {
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
	printf("///           Nome:                                                       ///\n");
	printf("///           E-mail:                                                     ///\n");
	printf("///           Celular:                                                    ///\n");
	printf("///           Veiculo:                                                    ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
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
	printf("///                      Digite o nome do Usuario                         ///\n");
	printf("///                                                                       ///\n");
	printf("/// Nomes cadastrados:                                                    ///\n");
	printf("/// 1.Fulano                                                              ///\n");	
	printf("/// 2.Beltrano                                                            ///\n");
	printf("/// 3.Zoio                                                                ///\n");
	printf("/// 4.Everton                                                             ///\n");
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
	printf("///           Informe o Usuario desejado                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///   Nome: Fulano                               email: fulano@gmail.com  ///\n");	
	printf("///   Celular: (84) 999999999                    Veiculo: HB.20           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                Deseja alterar esse Usuario: Sim ou Nao                ///\n");
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
	printf("///                      Informe o Usuario desejado:                      ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           Deseja Realmente excluir esse Usuario: Sim ou Nao           ///\n");
	printf("///                                                                       ///\n");			
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////MENU VAGAS///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void menuVagas(void) {
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
	printf("///           = = = = = = = = =  Menu Vagas = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Total de vagas                                           ///\n");
	printf("///           2. Vagas livres                                             ///\n");
	printf("///           3. Vagas em uso                                             ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void TotalVagas(void) {
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
	printf("///           = = = = = = =   Total de Vagas  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Total de vagas:                                             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite 0 para voltar ao menu principal.                     ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///              Digite Editar para alterar o total de vagas              ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void VagasLivres(void) {
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
	printf("///           = = = = = = = =   Vagas livres  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Vagas livres:                                               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite 0 para voltar ao menu Principal                      ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void VagasOcupadas(void) {
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
	printf("///           = = = = = = =   Vagas Ocupadas    = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Vagas ocupadas:                                             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite 0 para voltar ao menu Principal                      ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

//////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////MENU HISTORICO/////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void menuHistorico(void) {
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
	printf("///           = = = = = = = = = = Historico = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Historico do uso de vagas no ultimo dia                  ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
