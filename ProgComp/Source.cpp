#include <iostream>
using namespace std;
 enum mes {Jan=1,Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};
int main() {
	mes inicio, fim;
	inicio = Fev;
	fim = Nov;

	cout << "Digite o numero do mes atual: ";
	int atual;
	cin >> atual;

	if(atual >= inicio && atual <= fim) {
		cout << "Voce esta em periodo de aulas.\n";
	}
	else {
		cout << "Ferias!\n";
	}
}