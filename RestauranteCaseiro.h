#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseio{

	public:
		MesaDeRestaurante m[10];	

		void CalcularTotal();
		void AdicionaAoPedido();
		void CalculaTotalRestaurante();
};

#endif
