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