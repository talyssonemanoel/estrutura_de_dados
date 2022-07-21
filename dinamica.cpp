#include <iostream>
#include <stdlib.h>
using namespace std;
//Declaração de variáveis
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
	cout<<"Insira a opção desejada:\n[1]Inserir Nó\n[2]Remover Nó\n[3]Visualizar\n[4]Sair\n";
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
				cout<<"Não é possível remover"<<endl;
			} else {
				
			}
	}
	}
