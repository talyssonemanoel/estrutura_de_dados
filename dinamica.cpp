#include <iostream>
#include <stdlib.h>
using namespace std;
//Declara��o de vari�veis
typedef struct elemento{
	int valor;
	struct elemento *inicio;	
} elem;

elem *inserir(elem *end, int neww, elem *start){
	elem *aux;
	aux = (elem*)malloc(sizeof(elem));
	
	aux -> valor = neww;
	
	aux -> inicio = start;
	elem inicium = *aux;
	return (inicium);
	
}

int main(){
	elem *fim = NULL;
	int inicioo;
	int opt, novo;
	int x=0;
	cout<<"Insira a op��o desejada:\n[1]Inserir N�\n[2]Remover N�\n[3]Visualizar\n[4]Sair\n";
	cin>>opt;
	switch(opt){
		case 1:
			if(x==0){
			cout<<"Insira o novo elemento: ";
			cin>>inicioo;
			x++;
			} else {
			cout<<"Insira o novo elemento: ";
			cin>>novo;
			fim = inserir(fim, novo, inicioo); }
			break;
		case 2:
			if(*inici==*fim){
				cout<<"N�o � poss�vel remover"<<endl;
			} else {
				
			}
	}
	}
