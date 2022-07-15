#include <iostream>
using namespace std;

int main() {
	int vet[3];

	cout << "Conteudo da posicao 0: " << vet[0] << endl;
	cout << "Conteudo da posicao 1: " << vet[1] << endl;
	cout << "Conteudo da posicao 2: " << vet[2] << endl;

	vet[0] = 0; vet[1] = 0; vet[2] = 0;
	cout << "Conteudo da posicao 0: " << vet[0] << endl;
	cout << "Conteudo da posicao 1: " << vet[1] << endl;
	cout << "Conteudo da posicao 2: " << vet[2] << endl;

	cout << "\nO vetor tem " << sizeof vet << " bytes. \n";
	cout << "Um elemento tem " << sizeof vet[0] << " bytes. \n";
}