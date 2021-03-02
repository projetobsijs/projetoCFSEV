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