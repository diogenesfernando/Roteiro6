#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H


class MesaDeRestaurante : Pedido{
	public:
		int *num = new Pedido();
		string *desc = new Pedido();
		int *quant = new Pedido() ;	
		float *preco= new Pedido();

		void AdicionaPedido();
};

#endif
