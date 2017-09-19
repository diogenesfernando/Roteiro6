#include <iostream>
#include "Relogio.h"

using namespace std;

int main(){
	int h, m, s;

	cout << "Digite que horas são (h m s): ";
	cin >> h >> m >> s;

	Relogio t;

	t.SetHorario(h, m, s);

	cout << h << ":" << m << ":" << s << endl;

	t.AvancarHora();

	return 0;
}
