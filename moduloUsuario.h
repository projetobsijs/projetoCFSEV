void moduloUsuario(void);
char menuUsuario(void); 
char telaCadastrarUsuario(void);
void atualizarCadastro(void);
void atualizarCadastroDois(void);
char* telaPesquisa(void);
void telaPesquisaDois(void);
void deletarUsuario(void);

struct usuario {
    char placa[8];
	char nome[51];
	char celular[12];
};

typedef struct usuario Usuario;