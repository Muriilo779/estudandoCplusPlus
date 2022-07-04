#include <iostream>
using namespace std;

int main() {
	bool buzinar = false;

	cout << "Buzinar?";
	cin >> buzinar;

	if (buzinar == true) {
		cout << "Buzina\a\a\a\a\a";
	}
	else {
		cout << "Silencio" << endl;
	}
	return 0;
}