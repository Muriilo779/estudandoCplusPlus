#include <iostream>
using namespace std;

int main() {
	int batatas[3] = {7, 8, 6 };
	int custo[3] = { 20, 30, 5 };
	cout << "Quantidade de batatas e = ";
	cout << batatas[0] + batatas[1] + batatas[2];
	cout << " O pacote com " << batatas[1] << " Batatas custa " << custo[1] << " centavos por batata";

	int total = batatas[1] * custo[1]; 
	cout << " O segundo pacote custa " << total << " centavos. \n ";
	return 0;
}