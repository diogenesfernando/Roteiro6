#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio{
	
	private: 
		int hora, minuto, segundo;

	public:
		//Relogio(int hora, int minuto, int segundo);
		void SetHorario(int , int , int );
		int GetHora();
		int GetMinuto();
		int GetSegundo();
		void AvancarHora();

};

#endif
