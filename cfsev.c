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
#include <string.h>
#include <ctype.h>
#include "menuPrincipal.h"
#include "moduloHistorico.h"
#include "moduloinformacoes.h"
#include "moduloRelatorio.h"
#include "moduloUsuario.h"
#include "moduloVagas.h"

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
                    case '5':		moduloRelatorio();
									break;								
			}						
		} while (opcao != '0');
		return 0;
}
