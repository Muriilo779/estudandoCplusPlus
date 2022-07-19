#include <iostream>
using namespace std;

int main() {
	int total = 6;
	int* ptr;

	ptr = &total;

	cout << "Conteudo de total = " << total << endl;
	cout << "Conteudo apontado = " << *ptr << endl;

	cout << "Endereco de total = " << &total << endl;
	cout << "Endereco de ptr = " << ptr << endl;

	*ptr = *ptr + 1;
	cout << "Agora total vale = " << total << endl;
}