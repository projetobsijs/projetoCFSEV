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