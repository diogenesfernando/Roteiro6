#include <iostream>
#include "Televisao.h"

using namespace std;

int main(){
	int x, c;
	Televisao alterar;

	alterar.Setar(22, 54);
	
	cout << "\t\t\tOlá\n\n";
	
	while(1){	
		cout << "\t\t**********Opções**********\n";
		cout << "\t#1 - Digite 1 para aumentar o volume.\n";
		cout << "\t#2 - Digite 2 para diminuir o volume.\n";
		cout << "\t#3 - Digite 3 para aumentar o canal.\n";
		cout << "\t#4 - Digite 4 para diminuir o canal.\n";
		cout << "\t#5 - Digite 5 para selecionar o canal.\n";
		cout << "\t#6 - Digite 0 para sair.\n" << endl;
		cin >> x;

		switch(x){
			case 1: alterar.AumentarVol();
				break;		
			case 2: alterar.DiminuirVol();
				break;
			case 3: alterar.AumentarCanal();
				break;
			case 4: alterar.DiminuirCanal();
				break;
			case 5:	cout << "Digite o canal: ";
				cin >> c; 
				alterar.SelecionarCanal(c);
				break;
			case 0: cout << "\tAdeus\n"; 
				return -1;
		
			default: cout << "Operação inválida!!!\n";
		}
	}
	return 0;
} 
