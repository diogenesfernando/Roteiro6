#include <iostream>
#include <string>
#include "MesaDeRestaurante.h"

using namespace std;


void MesaDeRestaurante::AdicionaAoPedido(){
		int i;
		
		cout << "Diga o número do pedido: ";
		cin >> i;

		cout << "O que você quer? ";
		cin >> p[i].desc;

		cout << "Quantidade? ";
		cin >> p[i].quant;

		cout << "Digite o preço: ";
		cin >> p[i].preco;
	}
}

void MesaDeRestaurante::ZeraPedidos(){
	
	for(i=0; i<10; i++){
		p[i].num = 0;
		p[i].desc = "Nenhum pedido.";
		p[i].quant = 0;
		p[i].preco = 0;
	}
}	

void MesaDeRestaurante::CalculaTotal(){	
	float total=0;	
	for(i=0; i<10; i++){
		cout << "Total do pedido " << "#" << i+1 << ": " << p[i].preco * p[i].quant; << endl;
		total += (p[i].preco * p[i].quant);
		cout << "Total: " << total << endl;
	}	
}



