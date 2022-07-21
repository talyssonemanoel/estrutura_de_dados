#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//definindo uma estrutura do tipo nó
typedef struct no{
	int dado;
	struct no *proximo;
}tipo_no;

//definindo uma estrutuca para indexar o nosso início e fim da fila
typedef struct fila{
	tipo_no *inicioDaFila;
	tipo_no *fimDaFila;
}tipo_fila;

//função para inserir elementos na fila
void insereElemento(int entrada, tipo_fila *f){
	tipo_no *ponteiro;
	
	ponteiro=(tipo_no*) malloc(sizeof(tipo_no));
	//conferinfo se a alocação foi bem sucedida
	if(ponteiro==NULL){
		printf("Erro na alocacao de memoria!!!\n");
		return;
	}
	else{
		ponteiro->dado=entrada;
		ponteiro->proximo=NULL;
		if(f->inicioDaFila==NULL){
			f->inicioDaFila=ponteiro;
		}
		else{
			f->fimDaFila->proximo=ponteiro;
		}
		f->fimDaFila=ponteiro;
	}
}

void desenfileira(tipo_fila *f){
	tipo_no *ponteiro=f->inicioDaFila;
	
	if (ponteiro!=NULL){
		f->inicioDaFila=f->inicioDaFila->proximo;
		ponteiro->proximo=NULL;
		free(ponteiro);
		if(f->inicioDaFila==NULL){
			f->fimDaFila=NULL;
		}
	}
	else{
		printf("Fila vazia!!\n");
	}
}

void imprimirFila(tipo_fila *f){
	tipo_no *ponteiro = f->inicioDaFila;
	printf("FILA\n");
	if(ponteiro!=NULL){
		printf("[");
		while(ponteiro!=NULL){
			if(ponteiro==f->inicioDaFila){
				printf("%d", ponteiro->dado);
			}
			else{
				printf(" - %d", ponteiro->dado);
			}
			ponteiro=ponteiro->proximo;
		}
		printf("]\n\n");
	}
	else{
		printf("[");
		printf("VAZIO");
		printf("]\n\n");
	}
}

void inicializarFila(tipo_fila *f){
	f->inicioDaFila=NULL;
	f->fimDaFila=NULL;
}

int main()
{
	int dado;
	int opt=0;
	
	tipo_fila *FILA=(tipo_fila*) malloc(sizeof(tipo_fila));
	if(FILA==NULL){
		printf("Erro da alocacao de memoria para os ponteiros inicio e fim!!!\n");
	}
	else{
		inicializarFila(FILA);
		while(opt!=3){
			printf("|--- ESCOLHA UMA DAS OPCOES ----|\n|\t\t\t\t|\n|\t1- Enfileirar\t\t|\n|\t2- Desenfileirar\t|\n|\t3- Sair\t\t\t|\n|_______________________________|\n\n");
			imprimirFila(FILA);
			scanf("%d",&opt);
			
			switch(opt)
			{
			case 1:
			{
				printf("\nInsira o dado a ser enfileirado: ");
				scanf("%d",& dado);
				insereElemento(dado, FILA);
				system("cls");
			}break;
			case 2:
			{
				desenfileira(FILA);
				system("cls");
			}break;
			case 3:
			{
				printf("\n\nFechando programa...\n\n");
			}break;
			default:
				system("cls");
				break;
			}
			
		}
	}
	return 0;
}

