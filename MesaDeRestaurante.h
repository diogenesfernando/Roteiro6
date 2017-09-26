#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"

class MesaDeRestaurante{
	public:
		Pedido p[10];

		void AdicionaAoPedido();
		void ZeraPedidos();
		void CalculaTotal();
};

#endif
