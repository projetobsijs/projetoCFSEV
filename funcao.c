#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lerPlaca(char placa[]);
void validaPlaca(char placa[]);
void isnum(char caracter);

int main(){
	char placa[8];
	lerPlaca(placa);
	validaPlaca(placa);
	return 0;
	
}

void lerPlaca(char placa[]){
	int i=0;
	printf("Digite sua Placa de carro no modelo MERCOSUL: \n\n");
	for(i=0;i<=6;i++){
		placa[i]=getchar();
	}
	placa[8]='\0';
}

void validaPlaca(char placa[]){
	int i,k,j,z,correto=0;
	for(i=0;i<=3;i++){
        k=isalpha(placa[i]);
		if(k!=0 ){
            correto++;
		}else{
			break;
		}
	}
	for(i=3;i<=5;i++){
        j=isalnum(placa[i]);
		if(j!=0){
            correto++;
		}else{
			break;
		}
	}
		if(correto==7){
            return 1;	
        }
        else{
            return 0;
        }
}

int main()
{
    int dia, mes, ano;

    printf("Informe a data no seguinte formato (DD/MM/AAAA): \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (ano >= 0 && ano <= 2020)
    {
        if (mes >= 1 && mes <= 12)
        {
            if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
                printf("Válido.\n");
            else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
                printf("Válido.\n");
            else if ((dia >= 1 && dia <= 28) && (mes == 2))
                printf("Válido.\n");
            else if (dia == 29 && mes == 2 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
                printf("Válido.\n");
            else
                printf("Inválido.\n");
        }
        else
        {
            printf("Inválido.\n");
        }
    }
    else
    {
        printf("Inválido.\n");
    }
    return 0;
} 