#include <stdio.h>
#include <stdlib.h>
#include "menuPrincipal.h"

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
		printf("///           5. Relatorio                                                ///\n");
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