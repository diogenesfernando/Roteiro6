#include <iostream>
#include "Televisao.h"

using namespace std;

void Televisao::Setar(int vol, int canal){
	this->vol = vol;
	this->canal = canal;
}

int Televisao::GetVol(){
	return vol;
}

int Televisao::GetCanal(){
	return canal;
}

void Televisao::SelecionarCanal(int c){
	canal = c;
	cout << canal << endl;
}

void Televisao::AumentarVol(){
	if(vol == 100)
		cout << "100\n";
	else{
		vol += 1;	
		cout << vol << endl;}	
}

void Televisao::DiminuirVol(){
	if(vol == 0)
		cout << "0\n"; 
	else{ 
		vol -= 1;
		cout << vol << endl;}	
}

void Televisao::AumentarCanal(){
	canal += 1;
	cout << canal << endl;
}

void Televisao::DiminuirCanal(){
	canal -= 1;
	cout << canal << endl;
}
