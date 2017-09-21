#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao{
	private:
		int vol, canal;	

	public:
		void Setar(int, int);
		int GetVol();
		int GetCanal();
		void SelecionarCanal(int);
		void AumentarVol();
		void DiminuirVol();
		void AumentarCanal();
		void DiminuirCanal();
};


#endif 
