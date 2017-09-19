#include <iostream>
#include "Relogio.h"

using namespace std;


void Relogio::SetHorario(int hora, int minuto, int segundo){
			this->hora = hora;
			this->minuto = minuto;
			this->segundo = segundo;
}

int Relogio::GetHora(){
	return hora;	
}

int Relogio::GetMinuto(){
	return minuto;	
}

int Relogio::GetSegundo(){
	return segundo;	
}

void Relogio::AvancarHora(){
	cout << "Avançando hora...\n";

	if((hora<0) || (hora>23) || (minuto<0) || (minuto>59) || (segundo<0) || (segundo>59))
		cout << "!!! Horário inválido !!!\n\n";
	
	else if((segundo == 59) && (minuto == 59) && (hora != 23)){
		hora += 1;
		minuto = 0;
		segundo = 0;
		cout << "São: " << hora << ":" << minuto << ":" << segundo << " Hrs\n";
	}
	else if((segundo == 59) && (minuto != 59)){
		minuto += 1;
		segundo = 0;
		cout << "São: " << hora << ":" << minuto << ":" << segundo << " Hrs\n";
	}
	else if((hora == 23) && (minuto == 59) && (segundo == 59)){
		hora = 0;
		minuto = 0;
		segundo = 0;
		cout << "São: " << hora << ":" << minuto << ":" << segundo << "Hrs\n";
	}else cout << "São: " << hora << ":" << minuto << ":" << segundo+1 << " Hrs\n";
}

