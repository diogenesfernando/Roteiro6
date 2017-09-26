#include <iostream>
#include <string>
#include "RestauranteCaseiro.h"

using namespace std;


void RestauranteCaseiro::CalcularTotal(){	
	int x;
	cout << "Qual mesa? ";
	cin >> x;
	m[x].CalculaTotal();
}

void RestauranteCaseiro::AdicionaAoPedido(){
	int x;
	cout << "Qual mesa? ";
	cin >> x;
	m[x].AdicionaAoPedido();
}
